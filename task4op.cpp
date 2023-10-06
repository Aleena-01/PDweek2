#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);
void printMaze();
void playerMove(int x, int y);
main(){
 system("cls");
 printMaze();
 int x=4, y=4;
while(true)
{
  playerMove(x, y);
      x=x+1;
     if(x==22)
{
         x=4;
}

 

}
 gotoxy(22,0);
 
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

void playerMove(int x, int y) 
{
gotoxy(x, y);
   cout<<"P";
   Sleep(200);
  gotoxy(x, y);
   cout<<" ";
}