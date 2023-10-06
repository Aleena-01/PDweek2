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