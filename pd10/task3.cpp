#include <iostream>
using namespace std;

int arr[] = {};
int len = 0;
int repeatingCycle(int cycle);

main()
{
    int cycle = 0;
    int length = 0;
    cout << "Enter the length of array: ";
    cin >> length;

    arr[length];

    len = length; // Store the length globally

    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the length of the cycle: ";
    cin >> cycle;

    if (cycle > length)
    {
        cout << "Output: 1";
    }
    else
        cout << "Output: " << repeatingCycle(cycle);
}
int repeatingCycle(int cycle)
{
    for (int i = 0; i < len; i++)
    {
        if (arr[i] != arr[cycle])
        {
            return false;
        }
        cycle++;
    }
    return true;
}
