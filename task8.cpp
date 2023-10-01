#include <iostream>
using namespace std;

void pet(int holidays);

main() 
{
	int holidays;
	cout << "Holidays: ";
	cin >> holidays;
	pet(holidays);
}
void pet(int holidays)
{
	int workingDays, timeForGame, norm, difference, hours, minutes;
	workingDays = 365-holidays;
	timeForGame = ((workingDays * 63) + (holidays * 127));
	norm = 30000;
	if(norm > timeForGame){
	difference = norm - timeForGame;
	cout << "Tom sleeps well" <<endl;
	hours = difference / 60;
	minutes = difference % 60;
	cout << hours <<" hours and " << minutes <<" minutes less for play";
}
	if(norm < timeForGame){
	difference = timeForGame - norm;
	cout << "Tom will run away" <<endl;
	hours = difference / 60;
	minutes = difference % 60;
	cout << hours <<" hours and " << minutes <<" minutes for play";
}

}