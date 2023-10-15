#include <iostream>
using namespace std;
string findzodiacsign(int day, string month);
main()
{
    int day;
    string month, result;
    cout << "Enter the day of birth: ";
    cin >> day;

    cout << "Enter the month of birth (e.g., January, February): ";
    cin >> month;
    result = findzodiacsign(day, month);
    cout << "Zodiac Sign: " << result;
}
string findzodiacsign(int day, string month)
{
    string result;
    if ((day >= 21 && month == "March") || (day <= 19 && month == "April"))
    {
        result = "Aries";
    }

    if ((day >= 20 && month == "April") || (day <= 20 && month == "May"))
    {
        result = "Taurus";
    }

    if ((day >= 21 && month == "May") || (day <= 20 && month == "June"))
    {
        result = "Gemini";
    }

    if ((day >= 21 && month == "June") || (day <= 22 && month == "July"))
    {
        result = "Cancer";
    }

    if ((day >= 23 && month == "July") || (day <= 22 && month == "August"))
    {
        result = "Leo";
    }

    if ((day >= 23 && month == "August") || (day <= 22 && month == "September"))
    {
        result = "Virgo";
    }

    if ((day >= 23 && month == "September") || (day <= 22 && month == "October"))
    {
        result = "Libra";
    }

    if ((day >= 23 && month == "October") || (day <= 21 && month == "November"))
    {
        result = "Scorpio";
    }

    if ((day >= 22 && month == "November") || (day <= 21 && month == "December"))
    {
        result = "Sagittarius";
    }

    if ((day >= 22 && month == "December") || (day <= 19 && month == "January"))
    {
        result = "Capricon";
    }

    if ((day >= 20 && month == "January") || (day <= 18 && month == "February"))
    {
        result = "Aquarius";
    }

    if ((day >= 19 && month == "February") || (day <= 20 && month == "March"))
    {
        result = "Pisces";
    }

    return result;
}