#include <iostream>
using namespace std;
string checkPointPosition(int h, int x, int y);

int main()
{
    int x,y,h;
    cout << "Enter height: ";
    cin >> h;
    cout << "Enter x coordinate: ";
    cin >> x;
    cout << "Enter y coordinates: ";
    cin >> y;
    cout << checkPointPosition(h, x, y) << endl;
}

string checkPointPosition(int h, int x, int y)
{
    if (x == 0 && y == 0)
    {
        cout << "Border";
    }
    else if (x == 0 && y == h)
    {
        cout << "Border";
    }
    else if (x == h && y == 0)
    {
        cout << "Border";
    }
    else if (x == h && y == h)
    {
        cout << "Border";
    }
    else if (x == 2 * h && y == 0)
    {
        cout << "Border";
    }
    else if (x == 2 * h && y == h)
    {
        cout << "Border";
    }
    else if (x == 3 * h && y == 0)
    {
        cout << "Border";
    }
    else if (x == 3 * h && y == h)
    {
        cout << "Border";
    }
    else if (x == h && y == 2 * h)
    {
        cout << "Border";
    }
    else if (x == h && y == 3 * h)
    {
        cout << "Border";
    }

    else if (x == h && y == 4 * h)
    {
        cout << "Border";
    }
    else if (x == 2 * h && y == 2 * h)
    {
        cout << "Border";
    }
    else if (x == 2 * h && y == 3 * h)
    {
        cout << "Border";
    }
    else if (x == 2 * h && y == 4 * h)
    {
        cout << "Border";
    }
    else if ((x < 3 * h && x > 2 * h) && y < h)
    {
        cout << "Inside";
    }
    else if ((x < 2 * h && x > h) && y < h)
    {
        cout << "Inside";
    }
    else if ((x < 2 * h && x > h) && (y < 2 * h && y > h))
    {
        cout << "Inside";
    }
    else if ((x < 2 * h && x > h) && (y < 3 * h && y > 2 * h))
    {
        cout << "Inside";
    }
    else if ((x < 2 * h && x > h) && (y < 4 * h && y > 3 * h))
    {
        cout << "Inside";
    }
    else if (x < h  && y < h)
    {
        cout << "Inside";
    }
    else
    {
        cout << "Outside";
    }
}


