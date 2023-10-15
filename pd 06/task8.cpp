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
