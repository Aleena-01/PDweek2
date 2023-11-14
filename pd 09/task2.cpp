#include <iostream>
using namespace std;
string containsSeven(int arr[], int sizeArr);

main()
{
    int sizeArr;
    cout << "Enter the size of Array: ";
    cin >> sizeArr;
    int arr[sizeArr];
    for (int i = 0; i < sizeArr; i++)
    {
        cout << "Enter Element " << i + 1 << " : ";
        cin >> arr[i];
    }
    cout << containsSeven(arr, sizeArr);
}

string containsSeven(int arr[], int sizeArr)
{
    string result;
    result = "there is no 7 in the array";
    bool isFound = false;
    int number = 0, value = 0;
    for (int i = 0; i < sizeArr; i++)
    {
        if (!(isFound))
        {
            number = arr[i];
            while (number != 0)
            {
                value = number % 10;
                if (value == 7)
                {
                    result = "Boom!";
                    break;
                }
                number = number / 10;
            }
        }
    }
    return result;
}
