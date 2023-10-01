#include<iostream>
#include<windows.h>
using namespace std;
void alpH(char'H');
void alpA(char'A');
void alpS(char'S');
void alpN(char'N');
void gotoxy(int x, int y);


main() {
char 'H','A','S','N';
gotoxy(4,4);
alpH('H');

gotoxy(4,5);
alpH('A');

gotoxy(4,6);
alpH('S');

gotoxy(4,7);
alpH('S');

gotoxy(4,8);
alpH('A');

gotoxy(4,9);
alpH('N');


}
void alpH(char 'H')
{cout<<"H";}

void alpA(char 'A')
{cout<<"A";}

void alpS(char 'S')
{cout<<"S";}

void alpN(char 'N')
{cout<<"N";}

void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X =x;
coordinates.Y =y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);}