#include <iostream>
using namespace std;
int dimensions(int boxes, int dim[], int num);

main()
{
    int boxes;
    int result=0;
    cout << "Enter the number of boxes: ";
    cin>>boxes;
    int num= boxes * 3;

    int dim[num];
    cout << "Enter the dimensions of the boxes(length, width,height): "<<endl;
    for (int i = 0; i < boxes; i++)
    {
        int l,w,h;
        cin>>l>>w>>h;

        int product=l*w*h;
        result= result+product;
    }
       cout << "Total volume of all boxes: "<<result;
}
