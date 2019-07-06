#ifndef LOCATION_H
#define LOCATION_H

class Location
{
public:
    Location (int longitude, int latitude);
    void set_location (int longitude, int latitude);
    int get_latitude();
    int get_longitude();

private:
    int m_longitude;
    int m_latitude;
};

#endif
