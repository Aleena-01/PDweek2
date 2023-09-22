#include <iostream>
using namespace std;

main() {
cout<<"Number of Minutes: ";
int min;
cin>>min;

cout<<"Frames per Second: ";
int frames;
cin>>frames;

int totframes=min*60*frames;
cout<<"Total Number of Frames: "<<totframes;

return 0;


}

