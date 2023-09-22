#include <iostream>
using namespace std;

main() {
cout<<"Enter vegetable price per kilogram (in coins): ";
float vegprice;
cin>>vegprice;

cout<<"Enter fruit price per kilogram (in coins): ";
float fruitprice;
cin>>fruitprice;

cout<<"Enter total kilograms of vegetables: ";
int totveg;
cin>>totveg;

cout<<"Enter total kilograms of fruits: ";
int totfruits;
cin>>totfruits;

float totearning=(vegprice*totveg)+(fruitprice*totfruits);
float tot=totearning/1.94;

cout<<"Total earnings in Rupees (Rps): "<<tot;

return 0;











}