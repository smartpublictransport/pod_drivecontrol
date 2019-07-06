#include <iostream>
#include "location.h"
int main () {
    using namespace std;
    
    Location myLoc( 0, 2);
    cout << "Test \n";
    cout << myLoc.get_latitude() << endl;
    cout << myLoc.get_longitude() << endl;
    myLoc.set_location(3,5);
    cout << "Test \n";
    cout << myLoc.get_latitude() << endl;
    cout << myLoc.get_longitude() << endl;
    
    return 0;
}
