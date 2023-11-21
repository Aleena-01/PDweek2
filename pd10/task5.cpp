#include <iostream>
using namespace std;
int ascending(int package[]);

main()
{
    int package[10];
    cout << "Enter the weight of the 10 packages: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> package[i];
    }
    ascending(package);
    cout << "Elements sorted in ascending order are: ";
    cout << "[";
    for (int i = 0; i < 10; i++)
    {
        cout << package[i];
        if (i < 9)
        {
            cout << ", ";
        }
    }
    cout << "]";
}
int ascending(int package[])
{
    int val;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (package[j] > package[j + 1])
            {
                val = package[j];
                package[j] = package[j + 1];
                package[j + 1] = val;
            }
        }
    }
    return 0;
}