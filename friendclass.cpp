#include<iostream>
using namespace std;
int main(){
    class complex
{
    int a, b;

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    
    void printnumber()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};
    return 0;
}
