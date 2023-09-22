#include <iostream>
using namespace std;

main() {
cout<<"Enter the person's age: ";
int age;
cin>>age;

cout<<"Enter the number of times they've moved: ";
int move;
cin>>move;

int add= move+1;
int avg=age/add;
cout<<"Average number of years lived in the same house: "<<avg;
return 0;



}