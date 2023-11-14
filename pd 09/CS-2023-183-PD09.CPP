//TASK 1


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

//TASK 2

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

//TASK 3

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
       result="true";
    }
    else{
        result="false";
    }
    
    return result;
}

//TASK 4

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

//TASK 5

#include<iostream>
using namespace std;
int commonChar(string word1,string word2);

main()
{
    string word1;
    string word2;
    cout<<"Enter the first string: ";
    cin>>word1;

    cout<<"Enter the second string: ";
    cin>>word2;

    cout<<"Number of common characters: "<<commonChar( word1, word2);
}

int commonChar(string word1, string word2)
{
    int count = 0;
    for (int i = 0; i < word1.length(); i++)
    {
        for (int j = 0; j < word2.length(); j++)
        {
            if (word1[i] == word2[j])
            {
                count++;
                break;
            }
        }
    }
    return count;
}

// TASK 6

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

//TASK 7

#include<iostream>
using namespace std;
void convertPINtodance(string pin);

main() {
    string pin;
    cout<<"Enter your PIN (4 digits): ";
    cin>>pin;

if(pin[0] == '\0' || pin[1] == '\0' || pin[2] == '\0' || pin[3] == '\0' ||
(pin[0] <0 && pin[0]>9) || (pin[1] <0 && pin[1]>9) || (pin[2] <0 && pin[2]>9) || (pin[3] <0 && pin[3]>9) )
{
    cout<<"Invalid input. "<<endl;
}
convertPINtodance(pin);


}
void convertPINtodance(string pin)
{
string result; 
string dance[]={"Shimmy","Shake","Pirouete","Slide","Box Step", "Headspin","Dosado","Pop","Lock","Arabesque"};
int length=pin.length();
for(int i=0; i<length;i++)
{
  int digit=pin[i];
  int value=(digit+1)%10;
  cout<<dance[value]<<", ";
}
return;
}

//TASK 8

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

//TASK 9

#include <iostream>
using namespace std;
string longestSevenSegmentWord(string word[], int num);
bool lettersDisplay(string word);

main()
{
    int num;
    cout << "Enter the number of words: ";
    cin >> num;

    string word[num];
    cout << "Enter the words, one by one: " << endl;
    for (int i = 0; i < num; i++)
    {
        cin >> word[i];
    }
    
    cout<<"Longest 7-segment word: "<<longestSevenSegmentWord(word,num);

}

string longestSevenSegmentWord(string word[], int num)
{
    string longestword = "";
    int longestlength=longestword.length();
    for (int j = 0; j < num; j++)
    {
        int length=word[j].length();
        if(word[j] != "k" || word[j] != "m" || word[j] != "v" || word[j] != "w" || word[j] != "x" && length>=longestlength && length>= num)
        {
            longestword=word[j];
        }
    }
    return longestword;
}