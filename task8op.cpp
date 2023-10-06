#include<iostream>
using namespace std;
void uetpannel();
void std1aggregate(string name,int matric,int inter,int ecat);
void std2aggregate(string name2,int matric2,int inter2,int ecat2);

main() {
while(true)
{
string name,name2,key;
int matric,matric2,inter,inter2,ecat,ecat2;
float agg1,agg2;

uetpannel();
cout<<"Enter Choice: ";
int choice;
cin>>choice;
if(choice==1)
   {system("cls");
   cout<<"You choosed: 1"<<endl;
   string name, key;
   int matric, inter,ecat;
   cout<<"Enter your Name: "<<endl;
   cin>>name;
   cout<<"Enter your Matric Marks(out of 1100): "<<endl;
   cin>>matric;
   cout<<"Enter your Inter Marks(out of 550): "<<endl;
   cin>>inter;
   cout<<"Enter your ECAT Marks(out of 400): "<<endl;
   cin>>ecat;
   float agg=((matric/1100)*30) + ((inter/550)*30) + ((ecat/400)*40);
   cout<<"Press any key to continue....."<<endl;
   cin>>key;}

if(choice==2)
{system("cls");
       cout<<"You choosed: 2"<<endl;
string name2, key;
int matric2, inter2,ecat2;
cout<<"Enter your Name: "<<endl;
cin>>name2;
cout<<"Enter your Matric Marks(out of 1100): "<<endl;
cin>>matric2;
cout<<"Enter your Inter Marks(out of 550): "<<endl;
cin>>inter2;
cout<<"Enter your ECAT Marks(out of 400): "<<endl;
cin>>ecat2;
float agg2=((matric2/1100)*30) + ((inter2/550)*30) + ((ecat2/400)*40);
cout<<"Press any key to continue....."<<endl;
cin>>key;
}
 

if(choice ==3)
{system("cls");
std1aggregate(name,matric, inter,ecat);
}

if(choice==4)
{system("cls");
std2aggregate(name2, matric2,inter2,ecat2);
}
if(choice==5)
{system("cls");
if(agg1>agg2)
{cout<<"First roll number is: "<<name;}


if(agg2>agg1)
{cout<<"First roll number is: "<<name2;}
} 


}
}

void uetpannel()
{
cout<<"**********************************"<<endl;
cout<<"*         UET LAHORE             *"<<endl;
cout<<"**********************************"<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"Welcome to UET managment system";
cout<<endl;
cout<<endl;
cout<<"Press 1 to Enter Details of first student!"<<endl;
cout<<"Press 2 to Enter Details of second student!"<<endl;
cout<<"Press 3 to calculate the aggregate of first student!"<<endl;
cout<<"Press 4 to calculate the aggregate of second student!"<<endl;
cout<<"Press 5 to display the student with RollNumber 01!"<<endl;

}
void std1aggregate(string name, string key, float agg1)
{
string key,name;
float agg1;
cout<<name<<"'s aggregate: "<<agg1 ;
cout<<"Press any key to continue....."<<endl;
cin>>key;

}

void std2aggregate(string name2,string key, float agg2)
{string key,name2;
float agg2;
cout<<name<<"'s aggregate: "<<agg2;
cout<<"Press any key to continue....."<<endl;
cin>>key;
}