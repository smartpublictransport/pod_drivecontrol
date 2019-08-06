#include "station.h"


Station::Station():m_name(""), m_id(0){}

Station::Station(const Station& newS)
{   
    m_name = newS.m_name;
    m_id = newS.m_id;
    m_longitude = newS.m_longitude;
    m_latitude = newS.m_latitude;
}

void Station::set_name(std::string nam)
{
   m_name = nam;
}

std::string Station::get_name()
{
    return m_name;
}

void Station::set_id(int id)
{
    m_id =id;
}
int Station::get_id()
{
    return m_id;
}
