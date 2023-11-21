#include <iostream>
using namespace std;
int specialNum(int length, int nums[]);

main()
{
    int length;
    cout << "Enter the length of array: ";
    cin >> length;

    int nums[length];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < length; i++)
    {
        cin >> nums[i];
    }

    cout << "Special value: " << specialNum(length, nums);
}

int specialNum(int length, int nums[])
{
    int x;
    int count = 0;
    int newlen = length;
    for (int i = 0; i < length; i++)
    {
        if (nums[i] == 0)
        {
            newlen--;
            continue;
        }
    }
    for (int i = 0; i < length; i++)
    {
        if (nums[i] == 0 && nums[i+1]!=0)
        {
            continue;
        }
        if (newlen <= nums[i])
        {
            count++;
        }
        else
        {
            count = -1;
        }
    }
    return count;
}
