#include "location.h"


Location::Location():m_longitude(0), m_latitude(0){}

Location::Location(int longitude, int latitude):m_longitude(longitude), m_latitude(latitude){}

Location::Location(const Location& other):m_longitude(other.m_longitude), m_latitude(other.m_latitude){}

void Location::set_location(int longitude, int latitude)
{
    m_longitude = longitude;
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
