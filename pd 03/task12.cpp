#include <iostream>
using namespace std;

main() {
cout<<"Number of square meters you can print: ";
int sqmeter;
cin>>sqmeter;

cout<<"Width of the single wall (in meters): ";
int wid;
cin>>wid;

cout<<"Height of the single wall (in meters): ";
int height;
cin>>height;

int dim=wid*height;
int numwalls=sqmeter/dim;

cout<<"Number of wall you can print: "<<numwalls;



}