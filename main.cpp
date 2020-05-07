#include <iostream>
#include "locationManager.h"
#include "../motor_controller/include/motor_controller.h"

int main () {
    using namespace std;
    
    Station myLoc = set_destiny(3);
    Station myLoc2 = get_destination();
    cout << "Test \n";
    cout << myLoc.get_latitude() << endl;
    cout << myLoc.get_longitude() << endl;
   
    cout << "Test name \n";
    cout << myLoc2.get_name() << endl;
    cout << myLoc2.get_longitude() << endl;
    start_aceleration(); 
    return 0;
}
