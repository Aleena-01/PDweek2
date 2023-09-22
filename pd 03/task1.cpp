#include <iostream>
using namespace std;

main() {
cout<<"Enter the number of sides of the polygon: ";
int side;
cin>>side;

int intang=(side - 2)*180;
cout<<"The sum of internal angles of a "<<side<<"-sided polygon is: "<<intang<<" degrees";

return 0;


}