#include <iostream>
using namespace std;

main() {
cout<<"Enter the name of a Person: ";
string name;
cin>>name;

cout<<"Enter the target weight loss in kilogram: ";
float weight;
cin>>weight;

int weightloss=15*weight;
cout<<name<<" will need "<<weightloss<<" days to loss "<<weight<<" kg by following doctors's suggestions";

return 0;







}