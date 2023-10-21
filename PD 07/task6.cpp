#include<iostream>
using namespace std;
int primorial(int num);
bool isprime(int num);

main() {
    int num;
    cout<<"Enter number: ";
    cin>>num;

    cout<<primorial(num);
}

int primorial(int num)
{   
    int count = 0;
    int n = 2;
    int result = 1;
    while(count!=num) {
        if(isprime(n))
        {
            result = result * n;
           count++;
        }
        n++;
    }
    return result;
}
bool isprime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num %i==0)
        {
            return 0;
        }
      
    }
    return 1;
}