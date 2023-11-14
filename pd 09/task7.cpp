#include<iostream>
using namespace std;
void convertPINtodance(string pin);

main() {
    string pin;
    cout<<"Enter your PIN (4 digits): ";
    cin>>pin;

if(pin[0] == '\0' || pin[1] == '\0' || pin[2] == '\0' || pin[3] == '\0' ||
(pin[0] <0 && pin[0]>9) || (pin[1] <0 && pin[1]>9) || (pin[2] <0 && pin[2]>9) || (pin[3] <0 && pin[3]>9) )
{
    cout<<"Invalid input. "<<endl;
}
convertPINtodance(pin);


}
void convertPINtodance(string pin)
{
string result; 
string dance[]={"Shimmy","Shake","Pirouete","Slide","Box Step", "Headspin","Dosado","Pop","Lock","Arabesque"};
int length=pin.length();
for(int i=0; i<length;i++)
{
  int digit=pin[i];
  int value=(digit+1)%10;
  cout<<dance[value]<<", ";
}
return;
}