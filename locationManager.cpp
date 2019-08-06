#include <iostream>
#include "locationManager.h"

typedef struct
{
    uint32_t station_id;
    std::string station_name;
    int station_lat;
    int station_long;
} stations;


stations test_stations[5] =
{   {1,"AA",10,20},
    {2,"BB",20,30},
    {3,"CC",30,40},
    {4,"DD",40,50},
    {5,"FF",50,60} };


Station get_destination()
{
    //TODO: Request destination from server. Maybe Queue?
    //TODO: Remove temporary code once server setup is complete
    Station destiny;
    destiny.set_name("BB");
    destiny.set_id(2);
    destiny.set_location(20,30);
    return destiny;
}

Location get_current_location()
{
    //TODO: Request destination from server. Maybe Queue?
    //TODO: Remove temporary code once server setup is complete
    Location current(0, 0);
    return current;
}

Station set_destiny(int id)
{
    Station tmpS;
    for(int i=0; i < 5; i++){
        if(id == test_stations[i].station_id) {
            int tmp_longitude = test_stations[i].station_long;
            int tmp_latitude = test_stations[i].station_lat;
            std::string tmp_name = test_stations[i].station_name;
            int tmp_id = test_stations[i].station_id;
            tmpS.set_location(tmp_longitude, tmp_latitude);
            tmpS.set_name(tmp_name);
            tmpS.set_id(tmp_id);
            return tmpS;
        }
    }
    return tmpS;
}

