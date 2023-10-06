#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);
void printMaze();
void playerMoveDown(int x, int y);
main(){
 system("cls");
 printMaze();
 int x=4, y=2;
while(true)
{
  playerMoveDown(x, y);
      y=y+1;
     if(y==9)
{
         y=2;
}

 

}
 gotoxy(0,9);
 
}

void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void printMaze()
{
     cout<<endl;
     cout<<" #######################"<<endl;
     cout<<" #                     #"<<endl;
     cout<<" #                     #"<<endl;
     cout<<" #                     #"<<endl;
     cout<<" #                     #"<<endl;
     cout<<" #                     #"<<endl;
     cout<<" #                     #"<<endl;
     cout<<" #                     #"<<endl;
     cout<<" #######################"<<endl;
}

void playerMoveDown(int x, int y) 
{
gotoxy(x, y);
   cout<<"P";
   Sleep(200);
  gotoxy(x, y);
   cout<<" ";
}