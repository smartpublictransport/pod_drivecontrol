#include "location.h"

Location::Location(int longitude, int latitude):m_longitude(longitude),m_latitude(latitude) {}

void Location::set_location(int longitude, int latitude)
{
    m_longitude =  longitude;
    m_latitude = latitude;
}

int Location::get_latitude( )
{
    return m_latitude;
}

int Location::get_longitude( )
{
    return m_longitude;
}
