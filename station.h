#ifndef STATION_H
#define STATION_H
#include <string>
#include "location.h"

class Station : public Location
{
    public:
        Station();
        Station(const Station& newS);
        void set_name(std::string nam);
        std::string get_name();
        void set_id(int id);
        int get_id();

    private:
        std::string m_name;
        int m_id;
};
#endif
