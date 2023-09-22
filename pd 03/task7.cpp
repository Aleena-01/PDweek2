#include <iostream>
using namespace std;

main() {
cout<<"Enter the movie name: ";
string movie;
cin>>movie;

cout<<"Enter the adult ticket price: $";
int adulttick;
cin>>adulttick;

cout<<"Enter the child ticket price: $";
int childtick;
cin>>childtick;

cout<<"Enter the number of adult tickets sold: ";
int adultticksold;
cin>>adultticksold;

cout<<"Enter the number of child tickets sold: ";
int childticksold;
cin>>childticksold;

cout<<"Enter the percentage of the amount to be donated to charity: ";
int percentagech=0;
cin>> percentagech;

cout<<"Movie: "<<movie;

int totamount=adulttick*adultticksold+childtick*childticksold;
int charity= totamount/percentagech;
int remamout=totamount- charity;

cout<<"Total amount generated from ticket sales: $"<<totamount;
cout<<endl;
cout<<"Donation to charity ("<<percentagech<<"): $"<<charity;
cout<<endl;
cout<<"Remaining amount after donation: $"<<remamout;
cout<<endl;
 
return 0; 








}