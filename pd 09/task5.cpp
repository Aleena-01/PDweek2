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
                word1[i] = '@';
                word2[j] = '$';
                break;
            }
        }
    }
    return count;
}
