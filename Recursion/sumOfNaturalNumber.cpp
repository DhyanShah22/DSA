#include<iostream>

using namespace std;

int fun(int n)
{
    if(n==0)
    {
        return 0;
    }
        return fun(n-1)+n;
}

int main() 
{
    int r;
    r=fun(10);
    cout<<r<<endl;

    return 0;
}