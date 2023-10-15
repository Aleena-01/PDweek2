#include<iostream>
#include<cmath>
using namespace std;
float studiocalculations(string month, float stays);
float appartmentcalculations(string month, float stays);
int main()
{
    float stays, apartment, studio, result1, result2;
    string month;
    cout<<"Enter the month (May, June, July, August, September, October): ";
    cin>>month;
    cout<<"Enter the number of stays: ";
    cin>>stays;
    result1=studiocalculations(month, stays);
    result2=appartmentcalculations(month, stays);
    cout<<"Apartment: "<<result2<< "$"<<endl;
    cout<<"Studio: "<<result1<< "$"<<endl;    
}
float studiocalculations(string month, float stays)
{
    float studio;
    if(stays<=7 && (month=="May" || month=="October"))
    {
        studio=(stays*50.00);
    }
    else if((stays>7 && stays<=14) && (month=="May" || month=="October"))
    {
        studio=-(stays*50.00)*(0.05)+(stays*50.00);
    }
    else if((stays>14) && (month=="May" || month=="October"))
    {
        studio=-((stays*50.00)*(0.3))+(stays*50.00);
    }
    else if (stays<=14 && (month=="June" || month=="September"))
    {
        studio=stays*75.20;
    }
    else if(stays>14 && (month=="June" || month=="September"))
    {
        studio=-((stays*75.20)*(0.2))+(stays*75.20);
    }
    else if((month=="July" || month=="August"))
    {
        studio=(stays*76.00);
    }
    return studio;
}
float appartmentcalculations(string month, float stays)
{
    float apartment;
    if(stays<=14  &&  (month=="May" || month=="October"))
    {
        apartment=(stays*65);
    }
    else if((stays>14)  &&  (month=="May" || month=="October"))
    {
        apartment=(stays*65)-((stays*65)*(0.1));
    }
    else if (stays<=14 && (month=="June" || month=="September"))
    {
        apartment=stays*68.70;
    }
    else if(stays>14 && (month=="June" || month=="September"))
    {
        apartment=(stays*68.70)-((stays*68.70)*(0.1));
    }
    else if(stays<=14 && (month=="July" || month=="August"))
    {
        apartment=(stays*77);
    }
    else if(stays>7 && (month=="July" || month=="August"))
    {
        apartment=(stays*77)-((stays*77)*(0.1));
    }
    return apartment;
}