#include<iostream>

using namespace std;

int main() 
{
    int a= 10;
    int &r=a;
    r=25;
    cout<<a<<endl<<r<<endl;
    
    int b = 30;
    r=b;

    cout<<a<<endl<<r<<endl;
    return 0;
}