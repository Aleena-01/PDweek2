#include <iostream>
using namespace std;
int lettercount(int num, string word[], char letter);

main()
{
    int num;
    char letter;
    cout << "Enter how many words you want to Enter: ";
    cin >> num;

    string word[num];
    for (int i = 0; i < num; i++)
    {
        cout << "Enter word " << i + 1 << ": ";
        cin >> word[i];
    }

    cout << "Enter the letter you want to count: ";
    cin >> letter;
    // int result=lettercount(num, word, letter);
    cout << letter << " shows up " << lettercount(num, word, letter) << " times in the data.";
}

int lettercount(int num, string word[], char letter)
{
    int count = 0;
    for (int i = 0; i < num; i++)
    {
        string a = word[i];
        for (int j = 0; j < a.length(); j++)
        {
            if (a[j] == letter)
            {
                count++;
            }
        }
    }
    return count;
}