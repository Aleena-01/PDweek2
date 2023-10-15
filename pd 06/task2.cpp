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