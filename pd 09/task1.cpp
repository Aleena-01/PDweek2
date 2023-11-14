#include<iostream>
using namespace std;
main()
{
int result; 
string word;
cout<<"Enter a String: ";
getline(cin,word);
int length=word.length();
int count=0;
for(int i=0;i<length;i++)
{ 
count++;
}
if(count%2==0)
{
result=1;
}
else
{
result=0;
}
cout<<result;

}