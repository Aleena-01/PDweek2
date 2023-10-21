#include <iostream>
using namespace std;
bool isprime(int num);

main()
{
    int num;
    cout << "Enter Number: ";
    cin >> num;

    cout << isprime(num);
}
bool isprime(int num)
{
    for (int i = 1; i <= num; i++)
    {
        if ((num%i == 0) && ((i != 1) && (i != num)) )
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}