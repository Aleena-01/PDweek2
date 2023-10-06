#include <iostream>
using namespace std;

main() {
cout<<"Enter the size of the fertilizer bag in pounds: ";
float size;
cin>>size;

cout<<"Enter the cost of the bag: $";
float cost;
cin>>cost;

cout<<"Enter the area in square feet that can be covered by the bag: ";
float area;
cin>>area;

float costperpound=cost/size;
float costperarea=cost/area;

cout<<"Cost of fertilizer per pound: $"<<costperpound;
cout<<endl;
cout<<"Cost of fertilizing per square foot: $"<<costperarea;

return 0;










}