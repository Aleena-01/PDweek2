#include<iostream>
using namespace std;

main(){
    int num,num1;
    cout<<"Enter the number to Amplify: ";
    cin>>num;

for(int i=1; i<=num; i++)
{
    if(i%4!=0)
    {
    cout<<i<<", ";
    }
    else
    {
    num1=i*10;
    cout<<num1<<", ";
    }
}

}