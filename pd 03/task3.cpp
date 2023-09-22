#include <iostream>
using namespace std;

main() {
cout<<"Enter Initial Velocity (m/s): ";
int iniv;
cin>>iniv;

cout<<"Enter Acceleration (m/s^2): ";
int acc;
cin>>acc;

cout<<"Enter Time (s): ";
int time;
cin>>time;

int finv=acc*time + iniv;
cout<<"Final Velocity (m/s): "<<finv;

return 0;








}