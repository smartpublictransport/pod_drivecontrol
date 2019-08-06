#ifndef LOCATION_H
#define LOCATION_H


class Location
{
    public:
        Location();
        Location(int longitude, int latitude);
        Location(const Location& other);
        void set_location(int longitude, int latitude);
        int get_latitude();
        int get_longitude();

    protected:
        int m_longitude;
        int m_latitude;
};

#endif
