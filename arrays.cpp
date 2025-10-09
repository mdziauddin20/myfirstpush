#include<iostream>
using namespace std;
int main(){
    //aray example

    int marks[]={23,43,56,89};
    
    for ( int i = 0; i < 4; i++)
    {
         cout<<"the value of marks "<< i <<" is "<<marks[i]<<endl;

    }

        /* code */
        //
    // pointer and arrays
    int*p=marks;
    cout<<"the value of marks[0] is"<<*p;
   
     cout<<"the value of marks[1] is"<<*(p+1)<<endl;
     
    return 0;
}