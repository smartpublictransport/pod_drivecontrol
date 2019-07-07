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

LocationManager::LocationManager()
{
    m_location = LocationManager::get_current_location();
    m_destiny =  LocationManager::get_destination();
}

Location LocationManager::get_destination()
{
    //TODO: Request destination from server. Maybe Queue?
    //TODO: Remove temporary code once server setup is complete
    Location destiny(20,30,2,"BB");
    return destiny;
}

Location LocationManager::get_current_location()
{
    //TODO: Request destination from server. Maybe Queue?
    //TODO: Remove temporary code once server setup is complete
    Location current(0, 0);
    return current;
}

int LocationManager::set_destiny(uint32_t id)
{
    for(int i=0; i < 5; i++){
        if(id == test_stations[i].station_id) {
            int tmp_longitude = test_stations[i].station_long;
            int tmp_latitude = test_stations[i].station_lat;
            uint32_t tmp_name = test_stations[i].station_name;
            std:string tmp_id = test_stations[i].station_id;
            m_destiny.set_location(tmp_longitude, tmp_latitude, tmp_id, tmp_name);
            return 0;
        }
    }
    return -1;
}

