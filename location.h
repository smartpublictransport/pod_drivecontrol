#ifndef LOCATION_H
#define LOCATION_H

#include <string>

class Location
{
public:
    Location(int longitude, int latitude);
    Location(int longitude, int latitude, uint32_t id, std::string name);
    void set_location(int longitude, int latitude, uint32_t id, std::string name);
    int get_latitude();
    int get_longitude();
    std::string get_location_name();

private:
    int m_longitude;
    int m_latitude;
    uint32_t m_id;
    std::string m_name;
};

#endif
