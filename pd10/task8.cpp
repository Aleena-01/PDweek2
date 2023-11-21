#include <iostream>
using namespace std;
int rotation(int length, string dir[]);

main()
{
    int length;
    cout << "Enter the length of array: ";
    cin >> length;

    string dir[length];
    cout << "Enter the elements os the array (left or right): " << endl;
    for (int i = 0; i < length; i++)
    {
        cin >> dir[i];
    }

    cout << "Number of full rotations: " << rotation(length, dir);
}

int rotation(int length, string dir[])
{
    int rot = 0;
    int count = 0;
    for (int i = 0; i < length; i++)
    {
        if (dir[i] == "right")
        {
            rot = rot + 90;
        }
        if (dir[i] == "left")
        {
            rot = rot - 90;
        }
    }
    if (rot == 0)
    {
        return count = 0;
    }
    if (rot < 0)
    {
        while (rot != -1)
        {
            if (rot % 360 == 0)
            {
                count++;
            }
            rot = rot / 2;
        }
        return count;
    }

    while (rot != 1)
    {
        if (rot % 360 == 0)
        {
            count++;
        }
        rot = rot / 2;
    }
    return count;
}
