#include<iostream>
using namespace std;

 inline int product(int a, int b){
    // static int c=0;
    // c= c+1;


    return a*b;
}
float moneyreceived(int currentmoney,float factor=1.04){

}
int main(){
    int a, b;
    cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;
    // cout<<"the product of a and b is "<<product(a,b)<<endl;
    int money = 100000;
    
    cout<<"if you have "<<money<<" Rs in your bank account,you will recive"<<moneyreceived(money)<<"Rs after 1 year "<<endl;
    cout<<"for VIP:if you have "<<money<<" Rs in your bank account,you will recive"<<moneyreceived(money,1.1)<<"Rs after 1 year";
    return 0;
}