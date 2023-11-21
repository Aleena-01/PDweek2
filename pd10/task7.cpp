#include <iostream>
using namespace std;
bool arranged(int length, int arr[]);

main()
{
    int length;
    cout << "Enter the length of the array: ";
    cin >> length;

    int arr[length];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }

    cout << arranged(length, arr);
}
bool arranged(int length, int arr[])
{

    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (arr[i] == arr[j])
            {
                return false;
            }
        }
    }

    int max = arr[0];
    int min = arr[0];

    for (int i = 0; i < length; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    for (int i = 0; i < length; i++)
    {
        if (min != arr[i])
        {
            return false; // if a value is missing return false
        }
        else
        {
            min++;
        }
    }
    return true; // else return true
}