     //task1


#include<iostream>
using namespace std;

int value1=10;
int value2=20;

int sum() {
    value1=40;
    return value1 + value2;
}

main() {
    int x =value1;
    value1=100;
    x=20;
    value2= sum();
    cout<<value1<<"  "<<value2;
}

          //task2

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


    //task3

#include <iostream>
using namespace std;
float taxCalculator(char type, float price);

main()
{
    char type;
    float price, result;

    cout << "Enter the vehicle type code (M, E, S, V ,T): ";
    cin >> type;

    cout << "Enter the price of the vehicle:b $";
    cin >> price;

    result = taxCalculator(type, price);
    cout << "The final price of a vehicle of type " << type << " after adding the tax is $" << result << ".";
}

float taxCalculator(char type, float price)
{
    float result, taxAmmount, final;
    if (type == 'M')
    {
        taxAmmount = price * 0.06;
        final = price + taxAmmount;
        result = final;
    }

    if (type == 'E')
    {
        taxAmmount = price * (8 / 100);
        final = price + taxAmmount;
        result = final;
    }

    if (type == 'S')
    {
        taxAmmount = price * (10 / 100);
        final = price + taxAmmount;
        result = final;
    }

    if (type == 'V')
    {
        taxAmmount = price * (12 / 100);
        final = price + taxAmmount;
        result = final;
    }

    if (type == 'T')
    {
        taxAmmount = price * (15 / 100);
        final = price + taxAmmount;
        result = final;
    }

    return result;
}



    //task4


#include <iostream>
using namespace std;
string projectTimeCalculation(float h, float days, float workers);

main()
{
    float h, days, workers;
    cout << "Enter the needed hours: ";
    cin >> h;

    cout << "Enter the days that the firm has: ";
    cin >> days;

    cout << "Enter the number of all workers: ";
    cin >> workers;

    projectTimeCalculation(h,days,workers);
}
string projectTimeCalculation(float h, float days, float workers)
{
    int usedhours = 9 * days * workers;
    int addtime=h-usedhours;
    int lefttime=usedhours-h;
    if (usedhours < h)
    {
        cout << "Not enough time! "<<addtime<<" hours needed.";
    }
    if (usedhours > h)
    {
        cout << "yes! "<<lefttime<<" hours left.";
    }
}








