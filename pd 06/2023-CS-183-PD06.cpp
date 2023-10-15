//task1

#include<iostream>
using namespace std;
string decideactivity(string temp, string humidity);

main() {
    string temp,humidity,result; 
    cout<<"Enter temperature (warm or cold): ";
    cin>>temp;

    cout<<"Enter humidity (dry or humid): ";
    cin>>humidity;

    result=decideactivity(temp,humidity);
    cout<<"Recommended activity: "<<result;

    }
string decideactivity(string temp, string humidity)
{
    string result;
    if(temp=="warm" && humidity=="dry")
    {result="Play tennis";}

    else if(temp=="warm" && humidity=="humid")
    {result="swim";}

    else if(temp=="cold" && humidity=="dry")
    {result="Play basketball";}

    else if(temp=="cold" && humidity=="humid")
    {result="Watch tv";}
    return result;
}

//task2 

#include <iostream>
using namespace std;
float calculateaverage(float marksEng, float marksMath, float marksChem, float marksSocialSci, float marksBio);
string calculategrade(float percent);

main()
{
    string name, result;
    float percent, marksBio, marksEng, marksMath, marksChem, marksSocialSci;
    cout << "Enter student name: ";
    cin >> name;

    cout << "Enter marks for English: ";
    cin >> marksEng;

    cout << "Enter marks for Maths: ";
    cin >> marksMath;

    cout << "Enter marks for Chemistry: ";
    cin >> marksChem;

    cout << "Enter marks for Social Science: ";
    cin >> marksSocialSci;

    cout << "Enter marks for Biology: ";
    cin >> marksBio;

    cout << "Student Name: " << name<<endl;
    percent=calculateaverage(marksEng, marksMath, marksChem, marksSocialSci, marksBio);
    cout << "Percentage: " << percent << "%"<<endl;
    result = calculategrade(percent);
    cout << "Grade: " << result <<endl;
}
float calculateaverage(float marksEng, float marksMath, float marksChem, float marksSocialSci, float marksBio)
{
    float marks = (marksEng + marksMath + marksChem + marksSocialSci + marksBio);
    float avg=(marks/500);
    float percent = avg* 100;
    return percent;
}

string calculategrade(float percent)
{
    string result;
    if (percent <= 100 && percent >= 90)
    {
        result = "A+";
    }

    else if (percent < 90 && percent >= 80)
    {
        result = "A";
    }

    else if (percent < 80 && percent >= 70)
    {
        result = "B+";
    }

    else if (percent < 70 && percent >= 60)
    {
        result = "B";
    }

    else if (percent < 60 && percent >= 50)
    {
        result = "C";
    }

    else if (percent < 50 && percent >= 40)
    {
        result = "D";
    }

    else if (percent < 40)
    {
        result = "F";
    }

    return result;
}

//task3

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

//task4


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

//task5

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

//task6

#include<iostream>
#include<cmath>
using namespace std;
float calculations_studio(string month, float stays);
float calculations_apartment(string month, float stays);
int main()
{
    float stays, apartment, studio, result1, result2;
    string month;
    cout<<"Enter the month (May, June, July, August, September, October): ";
    cin>>month;
    cout<<"Enter the number of stays: ";
    cin>>stays;
    result1=calculations_studio(month, stays);
    result2=calculations_apartment(month, stays);
    cout<<result1<<endl<<result2;
}
float calculations_studio(string month, float stays)
{
    float studio;
    if(stays<=7&&(month=="May"||month=="October"))
    {
        studio=(stays*50.00);
    }
    else if((stays>7&&stays<=14)&&(month=="May"||month=="October"))
    {
        studio=-(stays*50.00)*(0.05)+(stays*50.00);
    }
    else if((stays>14)&&(month=="May"||month=="October"))
    {
        studio=-((stays*50.00)*(0.3))+(stays*50.00);
    }
    else if (stays<=14&&(month=="June"||month=="September"))
    {
        studio=stays*75.20;
    }
    else if(stays>14&&(month=="June"||month=="September"))
    {
        studio=-((stays*75.20)*(0.2))+(stays*75.20);
    }
    else if((month=="July"||month=="August"))
    {
        studio=(stays*76.00);
    }
    return studio;
}
float calculations_apartment(string month, float stays)
{
    float apartment;
    if(stays<=14&&(month=="May"||month=="October"))
    {
        apartment=(stays*65);
    }
    else if((stays>14)&&(month=="May"||month=="October"))
    {
        apartment=(stays*65)-((stays*65)*(0.1));
    }
    else if (stays<=14&&(month=="June"||month=="September"))
    {
        apartment=stays*68.70;
    }
    else if(stays>14&&(month=="June"||month=="September"))
    {
        apartment=(stays*68.70)-((stays*68.70)*(0.1));
    }
    else if(stays<=14&&(month=="July"||month=="August"))
    {
        apartment=(stays*77);
    }
    else if(stays>7&&(month=="July"||month=="August"))
    {
        apartment=(stays*77)-((stays*77)*(0.1));
    }
    return apartment;
}

//task7

#include <iostream>
using namespace std;
string checkStudentStatus(int examHour, int examMin, int arrivalHour, int arrivalMin);

main()
{
    int examHour, examMin, arrivalHour, arrivalMin;
    cout << "Enter Exam Starting Time (hour): ";
    cin >> examHour;

    cout << "Enter Exam Starting Time (minutes): ";
    cin >> examMin;

    cout << "Enter Student hour of arrival: ";
    cin >> arrivalHour;

    cout << "Enter Student minutes of arrival: ";
    cin >> arrivalMin;
}
string checkStudentStatus(int examHour, int examMin, int arrivalHour, int arrivalMin)
{ int hours, minutes;
int TotalExamMinutes = (examHour * 60) + examMin;
int TotalStudentMinutes = (arrivalHour * 60) + arrivalMin;
 string result;
if (TotalStudentMinutes == TotalExamMinutes)
{
    result = "On time";
}
if (TotalStudentMinutes < TotalExamMinutes)
{
    if ((TotalExamMinutes - TotalStudentMinutes) < 60)
    {
        result = "Early\n" + to_string(TotalExamMinutes - TotalStudentMinutes) + " minutes before the start";
    }
    if ((TotalExamMinutes - TotalStudentMinutes) >= 60)
    {
        hours = (TotalExamMinutes - TotalStudentMinutes) / 60;
        minutes = (TotalExamMinutes - TotalStudentMinutes) % 60;
        result = "Early\n" + to_string(hours) + ":" + to_string(minutes) + " hours before the start";
    }
}
if (TotalStudentMinutes > TotalExamMinutes)
{
    if ((TotalStudentMinutes - TotalExamMinutes) < 60)
    {
        result = "Late\n" + to_string(TotalStudentMinutes - TotalExamMinutes) + " minutes after the start";
    }
    if ((TotalStudentMinutes - TotalExamMinutes) >= 60)
    {
        hours = (TotalStudentMinutes - TotalExamMinutes) / 60;
        minutes = (TotalStudentMinutes - TotalExamMinutes) % 60;
        result = "Late\n" + to_string(hours) + ":" + to_string(minutes) + " hours after the start";
    }
}

return result;
}

//task8


#include <iostream>
using namespace std;
int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends);
int main()
{
    string yearType;
    int holidays, hometownWeekends, result;
    cout << "Enter year type: ";
    cin >> yearType;

    cout << "Enter number of holidays: ";
    cin >> holidays;

    cout << "Enter number of weekends: ";
    cin >> hometownWeekends;

    result = calculateVolleyballGames(yearType, holidays,hometownWeekends);
    cout << result;
}
int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends)
{
    int weekends = 48 - hometownWeekends;
    float volleyball = (holidays * (2 / 3) + weekends * (3 / 4));
    float result=volleyball + (48 - weekends);
  if (yearType == "leap")
    {
        result = result + (result * 0.15);
    } 
  if (yearType=="normal")
  {
    result;
  }
    return result;
}

//task9

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

