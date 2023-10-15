#include<iostream>
using namespace std;
string decideactivity(string temp, string humidity);

main() {
    string temp,humidity,result; 
    cout<<"Enter temperature (warm or cold): ";
    cin>>temp;

    cout<<"Enter humidity (dry or humid): ";
    cin>>humidity;

    result=decideactivity(temp,humidity);
    cout<<"Recommended activity: "<<result;

    }
string decideactivity(string temp, string humidity)
{
    string result;
    if(temp=="warm" && humidity=="dry")
    {result="Play tennis";}

    else if(temp=="warm" && humidity=="humid")
    {result="swim";}

    else if(temp=="cold" && humidity=="dry")
    {result="Play basketball";}

    else if(temp=="cold" && humidity=="humid")
    {result="Watch tv";}
    return result;
}
