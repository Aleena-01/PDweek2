#include<iostream>
using namespace std;
void Reverse(string trueorfalse);

main() {
string trueorfalse;
cout<<"Enter 'true' or 'false': ";
cin>>trueorfalse;

Reverse(trueorfalse);
}

void Reverse(string trueorfalse)
{
if(trueorfalse=="true")
{cout<<"false";}

if(trueorfalse=="false")
{cout<<"true";}
}