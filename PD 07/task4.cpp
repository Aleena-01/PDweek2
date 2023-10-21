#include<iostream>
using namespace std;
int triangle(int num);

main() {
    int num;
    cout<<"Enter number of triangle: ";
    cin>>num;

    cout<<"Dots in the triangle: "<<triangle(num);
}
int triangle(int num)
{
int sum=0;
for(int i=1;i<=num;i++)
{
    sum=sum+i;
}    
return sum;
}