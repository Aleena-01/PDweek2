#include <iostream>
using namespace std;
bool areAllElementsIdentical(string arr[], int sizeArr);

main()
{
    int sizeArr;
    cout << "Enter the size of Array: ";
    cin >> sizeArr;
    string arr[sizeArr];


    cout << areAllElementsIdentical(arr, sizeArr);
}

bool areAllElementsIdentical(string arr[], int sizeArr)
{
    bool result;
    int count =0;
    for (int i = 0; i < sizeArr; i++)
    {
        cout << "Enter Element " << i + 1 << " : ";
        cin>>arr[i];
    if(arr[i]==arr[0])
    {
        count++;
    }
    }
    if(count==sizeArr)
    {
       result= true;
    }
    else{
        result= false;
    }
    
    return result;
}