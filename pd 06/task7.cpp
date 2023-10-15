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