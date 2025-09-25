// There are two types of header files:
// 1. System files:it comes with the compiler
#include<iostream>
// 2. user defined header files: It is written by the programmer
// #include "this.h"//--> this will produce an error if this.h is no present in the current directory

using namespace std;

int main(){
    int a=4, b=5;
    cout<<"operators in C++:"<<endl;
    cout<< "Following are the types of operators in c++"<<endl;
    // Arithmetic operators
    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"The value of a * b is "<<a*b<<endl;
    cout<<"The value of a / b is "<<a/b<<endl;
     cout<<"The value of a ++ b is "<<++a+b<<endl;
     cout<<"The value of ++a is "<<++a<<endl;
    
    // Assiggnment operators --> used to asssign values to variables 
    // int a=3, b=9;
    // char d='d';

    // comparison operators
    cout<<"Following are the comparison operators in c++"<<endl;
    cout<<"The value of a == b is "<<(a==b)<<endl;
    cout<<"The value of a != b is "<<(a!=b)<<endl;
    cout<<"The value of a >= b is "<<(a>=b)<<endl;
    cout<<"The value of a <= b is "<<(a<=b)<<endl;
    cout<<"The value of a > b is "<<(a>b)<<endl;
    cout<<"The value of a < b is "<<(a==b)<<endl;

    // Logical operators
    cout<<"Following are the logical operators in c++"<<endl;
    cout<<"The value of this logical and operator ((a==b) && (a<b)) is:"<<((a==b) && (a<b))<<endl;
    cout<<"The value of this logical or operator ((a==b) || (a<b)) is:"<<((a==b) || (a<b))<<endl;
    cout<<"The value of this logical notoperator (!(a==b)) is:"<<(!(a==b))<<endl;


    return 0;
}