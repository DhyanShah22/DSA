#include<iostream>

using namespace std;

struct Rectangle 
{
    int length;
    int breadth;
}r1,r2;

int main() 
{
    r1={10,15};

    cout<<r1.length<<endl;
    cout<<r1.breadth<<endl;

    Rectangle *p=&r1;

    cout<<p->length<<endl;
    cout<<p->breadth<<endl;

    Rectangle *x;
    x = new Rectangle;

    x->length=15;
    x->breadth=12;

    cout<<x->length<<endl;
    cout<<x->breadth<<endl;

    return 0;
}