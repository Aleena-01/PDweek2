#include <iostream>
using namespace std;
float units(float h, float w, float l, string unit);

main()
{
    float l, w, h, result;
    string unit;
    cout << "Enter the length of the pyramid (in meters): ";
    cin >> l;

    cout << "Enter the width of the pyramid (in meters): ";
    cin >> w;

    cout << "Enter the height of the pyramid (in meters): ";
    cin >> h;

    cout << "Enter the desired output unit (millimeters,centimeters, meters,kilometers): ";
    cin >> unit;

    result = units(h, w, l, unit);

    cout << "The volume of the pyramid is: " << result << " cubic " << unit; 
}
    float units(float h, float w, float l, string unit)
    {
        float result;
        float v;
        if (unit == "millimeters")
        {
            v=(l*w*h/ 3)*1000;
            result = v;
        }

        if (unit == "centimeters")
        {
            v = (l * w * h / 3) * 100;
            result = v;
        }

        if (unit == "meters")
        {
            v = (l * w * h / 3);
            result = v;
        }

        if (unit == "kilometers")
        {
            v = (l * w * h / 3) / 1000;
            result = v;
        }

        return result;
    }
