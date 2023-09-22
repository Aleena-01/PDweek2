#include <iostream>
using namespace std;

main() {
cout<<"Enter a 4-digit number: ";
int num;
cin>>num;

int num1=num%10;
int numA=num/10;
int num2=numA%10;
int numB=numA/10;
int num3=numB%10;
int numC=numB/10;
int num4=numC%10;

int sum=num1+num2+num3+num4;
cout<<"Sum of the individual digits: "<<sum;

return 0;








}