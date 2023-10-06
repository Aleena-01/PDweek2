#include<iostream>
using namespace std;
void flowerShop(int redRose, int whiteRose, int tulip);

main() {
int redRose,whiteRose,tulip;
cout<<"Red Rose: ";
cin>>redRose;

cout<<"White Rose: ";
cin>>whiteRose;

cout<<"Tulips: ";
cin>>tulip;

flowerShop(redRose,whiteRose, tulip);
}

void flowerShop(int redRose, int whiteRose, int tulip)
{
float price=redRose*2+whiteRose*4.10+tulip*2.50;
cout<<"Original Price: $"<<price;
cout<<endl;

if(price>200)
{cout<<"Price after Discount: $"<<price-(price*0.2);}

if(price<200)
{cout<<"No discount applied.";}



}