#include <iostream>
using namespace std;

main() {
cout<<"Enter Imposter Count: ";
int impcount;
cin>>impcount;

cout<<"Enter Player Count: ";
float pcount;
cin>>pcount;

float chance=100*(impcount/pcount);
cout<<"Chance of being an imposter: "<<chance<<"%";

return 0;








}