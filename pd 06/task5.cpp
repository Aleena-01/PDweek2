#include <iostream>
using namespace std;
float calculateprice(string fruit, string day, float quantity);

main()
{
    string fruit = "", day;
    float quantity = 0.0;

    cout << "Enter fruit: ";
    cin >> fruit;
    if (fruit == "banana" || fruit == "apple" || fruit == "orange" || fruit == "grapefruit" || fruit == "kiwi" || fruit == "pineapple" || fruit == "grapes")
    {
        cout << "Enter day: ";
        cin >> day;
        if (day == "Sunday" || day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday" || day == "Saturday")
        {
            cout << "Quantity: ";
            cin >> quantity;
            float price = calculateprice(fruit, day, quantity);
            cout << "Total price: " << price;
        }
        else
        {
            cout << "Error";
        }
    }
    else
    {
        cout << "Error";
    }
}
float calculateprice(string fruit, string day, float quantity)
{
    float price = 0.0;
    if (day == "Sunday" && fruit == "banana")
    {
        price = quantity * 2.7;
        // return result = price;
    }

    if (day == "Sunday" && fruit == "apple")
    {
        price = quantity * 1.25;
        // return result = price;
    }

    if (day == "Sunday" && fruit == "orange")
    {
        price = quantity * 0.90;
        // return result = price;
    }

    if (day == "Sunday" && fruit == "grapefruit")
    {
        price = quantity * 1.60;
        // return result = price;
    }

    if (day == "Sunday" && fruit == "kiwi")
    {
        price = quantity * 3;
        // return result = price;
    }

    if (day == "Sunday" && fruit == "pineapple")
    {
        price = quantity * 5.60;
        // return result = price;
    }

    if (day == "Sunday" && fruit == "grapes")
    {
        price = quantity * 4.20;
        // return result = price;
    }

    if (day != "Sunday" && fruit == "banana")
    {
        price = quantity * 2.5;
        // return result = price;
    }

    if (day != "Sunday" && fruit == "apple")
    {
        price = quantity * 1.20;
        // return result = price;
    }

    if (day != "Sunday" && fruit == "orange")
    {
        price = quantity * 0.85;
        // return result = price;
    }

    if (day != "Sunday" && fruit == "grapefruit")
    {
        price = quantity * 1.45;
        // return result = price;
    }

    if (day != "Sunday" && fruit == "kiwi")
    {
        price = quantity * 2.7;
        // return result = price;
    }

    if (day != "Sunday" && fruit == "pineapple")
    {
        price = quantity * 5.50;
        // return result = price;
    }

    if (day != "Sunday" && fruit == "grapes")
    {
        price = quantity * 3.85;
        // return result = price;
    }
    return price;
}