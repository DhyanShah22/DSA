#include<iostream>

using namespace std;

struct rectangle
{
    int length;
    int breadth;
};

void fun(struct rectangle *p) 
{
    p->length=20;
    cout<<"Length: "<<p->length<<endl<<"Breadth: "<<p->breadth<<endl;
}
int main()
{
    rectangle r1 = {10,5};
    fun(&r1);

    cout<<"Length is: "<<r1.length<<" and breadth is: "<<r1.breadth<<endl;
    return 0;
}