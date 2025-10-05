#include<iostream>
using namespace std;
int main (){
int calci;

cout<<"enter 1 for addition"<<endl;
cout<<"enter 2 for subtraction"<<endl;
cout<<"enter 3 for multiplication"<<endl;
cout<<"enter 4 for division "<<endl;
cout<<"ENTER A CHOICE FROM ABOVE"<<endl;

cin>>calci;
int a;
int b;
cout<<"enter the value of a"<<endl;
cin>>a;
cout<<"enter the value of b"<<endl;
cin>>b;

switch (calci)
{
case 1:
    cout<<"adittion of a+b :"<< a+b<<endl;
    break;
case 2:
     cout<<"subtraction  of a-b :"<<a-b<<endl;
     break;
case 3:
    cout<<"multiplication of a*b :"<<a*b<<endl;
    break;
    case 4:
    cout<<"division ofa/b :"<<a/b<<endl;
    break;

default:
cout<<"no special cases"<<endl;
    break;
}
}