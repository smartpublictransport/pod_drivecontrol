#include "location.h"

Location::Location(int longitude, int latitude):m_longitude(longitude), m_latitude(latitude),
    m_id(0), m_name(""){}

Location::Location(int longitude, int latitude, uint32_t id, std::string name):m_longitude(longitude), m_latitude(latitude),
    m_id(id), m_name(name){}

void Location::set_location(int longitude, int latitude, uint32_t id, std::string name)
{
    m_longitude = longitude;
    m_latitude = latitude;
    m_id = id;
    m_name = name;
}

int Location::get_latitude( )
{
    return m_latitude;
}

int Location::get_longitude( )
{
    return m_longitude;
}

std::string Location::get_location_name()
{
    return m_name;
}
