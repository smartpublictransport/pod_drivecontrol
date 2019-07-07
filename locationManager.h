#ifndef LOCATION_MANAGER_H
#define LOCATION_MANAGER_H

#include "location.h"

class LocationManager
{
public:
    LocationManager();
    Location get_destination();
    Location get_current_location();
    int set_destiny(uint32_t id);

private:
    Location m_destiny;
    Location m_location;
};

#endif
