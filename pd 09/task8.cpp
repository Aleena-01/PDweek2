#include<iostream>
using namespace std;
string findBrokenkeys(string correctPhrase,string actualTyped );

main(){
    string correctPhrase, actualTyped;
    cout<<"Enter the correct phrase: ";
    getline(cin,correctPhrase);

    cout<<"Enter what you actually typed: ";
    getline(cin,actualTyped);

    cout<<"Broken keys: "<<findBrokenkeys(correctPhrase, actualTyped );
}

string findBrokenkeys(string correctPhrase,string actualTyped )
{
string result;
bool key[26];
int length=correctPhrase.length();
for(int i=0;i<length;i++)
{
    if(correctPhrase[i] != actualTyped[i])
    {
        result=correctPhrase[i];
    }
    
}
return result;
}