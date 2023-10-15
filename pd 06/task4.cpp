#include <iostream>
using namespace std;
float calculatebill(char servicecode, char time, int minutes);

main()
{
    char servicecode, time;
    int minutes;
    float result;
    cout << "Enter the service code (R/r for regular, P/p for premium):";
    cin >> servicecode;
    if (servicecode != 'r' || servicecode != 'R' || servicecode != 'P' || servicecode != 'p')
    {
        cout << "Error";
    }
    else 
    {
        cout << "Enter time of the call (D/d for day, N/n for night):";
        cin >> time;

        cout << "Enter the number of minutes used: ";
        cin >> minutes;

        cout << "Service Type: " << servicecode << endl;
        cout << "Total Minutes Used: " << minutes << " minutes" << endl;

        result = calculatebill(servicecode, time, minutes);
        cout << "Amount Dues: $" << result;
    }
}
float calculatebill(char servicecode, char time, int minutes)
{
    float result;
    if (servicecode == 'R' || servicecode == 'r')
    {
        if (minutes > 50)
        {
            float remTime;
            remTime = minutes - 50;
            float ammount = remTime * 0.2;
            float totaldues = 10 + ammount;
            result = totaldues;
        }

        if (minutes <= 50)
        {
            result = 10;
        }
    }

    else if (servicecode == 'P' || servicecode == 'p')
        if (minutes > 75)
        {
            if (time == 'D' || time == 'd')
            {
                float remTime;
                remTime = minutes - 75;
                float ammount = remTime * 0.1;
                float totaldues = 25 + ammount;
                result = totaldues;
            }
        }
    if (minutes > 100)
    {
        if (time == 'N' || time == 'n')
        {
            float remTime;
            remTime = minutes - 100;
            float ammount = remTime * 0.05;
            float totaldues = 25 + ammount;
            result = totaldues;
        }
    }

    if (minutes < 75)
    {
        result = 25;
    }

    return result;
}
