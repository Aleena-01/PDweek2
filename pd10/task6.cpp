#include<iostream>
using namespace std;
string reverseString(string word);

main()
{
    string word;
    cout<<"Enter a string: ";
    getline(cin,word);

    cout<<"Reversed string: "<<reverseString(word);
}
string reverseString(string word)
{
    string rev=" ";
    string result=" ";
    for(int i=0; i<word.length(); i++)
    {
        result= result+ word[i];
        if(word[i] == ' ')
        {
            rev=result+rev;
            result=" ";
        }
    }
    rev=result+rev;
    return rev;
}
