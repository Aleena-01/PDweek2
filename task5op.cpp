#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X =x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}

int main() {
system("cls")

gotoxy(15,15);
cout<<"ALEENA ZAFAR";

return 0;
}



