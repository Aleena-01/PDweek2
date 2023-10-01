#include <iostream>
using namespace std;
void countryticket(string name,float price);

main() {
string name;
float price;

cout<<"Enter the country's name: ";
cin>>name;

cout<<"Enter the ticket price in dollars: $";
cin>>price;

countryticket(name,price);

void countryticket(string name,float price)
{
if("name"=="Paksitan")
{cout<<"Final ticket price after discount: $"<<price-(price*0.05);} 

if("name"=="Ireland")
{cout<<"Final ticket price after discount: $"<<price-(price*0.1);} 

if("name"=="India")
{cout<<"Final ticket price after discount: $"<<price-(price*0.2);} 

if("name"=="England")
{cout<<"Final ticket price after discount: $"<<price-(price*0.3);} 

if("name"=="Canada")
{cout<<"Final ticket price after discount: $"<<price-(price*0.45);} 
}