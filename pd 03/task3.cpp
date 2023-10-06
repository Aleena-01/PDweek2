#include <iostream>
using namespace std;

main() {
cout<<"Enter Initial Velocity (m/s): ";
float iniv;
cin>>iniv;

cout<<"Enter Acceleration (m/s^2): ";
float acc;
cin>>acc;

cout<<"Enter Time (s): ";
float time;
cin>>time;

float finv=acc*time + iniv;
cout<<"Final Velocity (m/s): "<<finv;

return 0;








}