#include <iostream>
using namespace std;
int evenOddTransform(int arr[], int sizeArr, int numoftimes);

main()
{
    int sizeArr;
    cout << "Enter the size of Array: ";
    cin >> sizeArr;
    int arr[sizeArr];
    for (int i = 0; i < sizeArr; i++)
    {
        cout << "Enter Element " << i + 1 << " : ";
        cin>>arr[i];
    }
    int numoftimes;
    cout<<"Enter number of times even-odd transformation needs to be done: ";
    cin>>numoftimes;

    evenOddTransform(arr, sizeArr,numoftimes);
    cout<<"[";
    for(int k=0;k<sizeArr;k++)
    {
        cout<<arr[k]<<", ";
    }
    cout<<" ]";
}
int evenOddTransform(int arr[], int sizeArr, int numoftimes)
{
    int result;
   for(int i=0;i<numoftimes;i++)
   {
    for(int j=0;j<sizeArr;j++)
    {
        if(arr[i]%2==0)
        {
            result= arr[i]=arr[i]-2;
        }
        else
        {
            result= arr[i]=arr[i]+2;
        }
    }
   }
   return result;
}