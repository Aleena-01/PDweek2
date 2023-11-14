#include<iostream>
using namespace std;
int coloringtime(string cols[], int sizeArr);

main() {
    int sizeArr;
    cout<<"Enter the size of Array: ";
    cin>>sizeArr;

    string cols[sizeArr];
    for(int i=0;i<sizeArr;i++)
    {
        cout << "Enter Element " << i + 1 << " : ";
        cin>>cols[i];
    }
    cout<<"Time to color: "<<coloringtime(cols,sizeArr)<<" seconds";
}
int coloringtime(string cols[], int sizeArr)
{
    int size;
    size=(sizeArr*2)+ (sizeArr-1);
    return size;
}