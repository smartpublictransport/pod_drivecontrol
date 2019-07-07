#include <iostream>
#include "location.h"
int main () {
    using namespace std;
    
    Location myLoc( 0, 2);
    cout << "Test \n";
    cout << myLoc.get_latitude() << endl;
    cout << myLoc.get_longitude() << endl;
   // myLoc.set_location_by_id(2);
    cout << "Test name \n";
    cout << myLoc.get_location_name() << endl;
    cout << myLoc.get_longitude() << endl;
    
    return 0;
}
