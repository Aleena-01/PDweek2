#include<iostream>
using namespace std;
int singleprogress(int noOfSat[], int sat);
int totalprogress();

main()
{
    int sat;
    cout<<"Enter the number Saturdays: ";
    cin>>sat;

    int noOfSat[sat];
    for(int i=0;i<sat;i++)
    {
        cout<<"Enter miles run for Saturday "<<i+1<<": ";
        cin>>noOfSat[i];
    }

    cout<<"Total progress days: "<<singleprogress(noOfSat, sat);
}

int singleprogress(int noOfSat[], int sat)
{
    int count=0;
    for(int i=0; i<sat; i++)
    {
        if(noOfSat[i-1]<noOfSat[i] && i!=0)
        {
            count++;
           
        }
    }
    return count;
}

