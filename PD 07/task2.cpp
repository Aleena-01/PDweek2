#include <iostream>
using namespace std;
void halfdiamond1(int rowsize, int space);
void halfdiamond2(int rowsize);

main()
{
    int rowsize, space;
    cout << "Enter desired number of rows: ";
    cin >> rowsize;

    halfdiamond1(rowsize, space);
    halfdiamond2(rowsize);
}

void halfdiamond1(int rowsize, int space)
{
    int col = 1;
    rowsize=rowsize/2;
    for (int row = 1; row <= rowsize; row++)
    {
        for (int space = rowsize; space >= row; space--)
        {
            cout << " ";
        }
        for (int col = 1; col <= row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void halfdiamond2(int rowsize)
{
    rowsize=rowsize/2;
    for (int row = 1; row <= rowsize; row++)
    {
        for (int space = 1; space <= row; space++)
        {
            cout << " ";
        }
        for (int col = rowsize; col >= row; col--)
        {
            cout << "*";
        }
        cout<<endl;
    }
}
