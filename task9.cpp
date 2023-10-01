#include <iostream>
using namespace std;

void usage(int people, int tp);

main() 
{
	int people, tp;
	cout << "Number of people in the household: ";
	cin >> people;
	cout << "Number of rolls of TP: ";
	cin >> tp;
	usage(people, tp);
}
void usage(int people, int tp)
{
	int sheets, usingDays;  
	sheets = tp * 500;
	usingDays = (sheets / people ) / 57;
	if( usingDays >= 14){
	cout << "Your TP will last " ;
	cout <<usingDays <<" days, no need to panic!";
}
	if(usingDays <= 14){
	cout << "Your TP will only last ";
	cout <<usingDays <<" days, buy more!";
}

}