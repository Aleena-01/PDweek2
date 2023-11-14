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