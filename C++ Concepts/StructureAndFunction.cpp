#include<iostream>

using namespace std;

struct rectangle {
    int length;
    int breadth;
};

void initialise(struct rectangle *r, int l, int b)
{
    r->length=l;
    r->breadth=b;
}

int area(struct rectangle r)
{
    return r.length*r.breadth;
}

int perimeter(struct rectangle r)
{
    return 2*(r.length+r.breadth);
}

int main() 
{
    rectangle r={0,0};

    int l,b;
    cout<<"Enter the length and the breadth of the rectangle"<<endl;
    cin>>l>>b;

    initialise(&r, l, b );

    int a= area(r);
    int p = perimeter(r);

    cout<<"Area is: "<<a<<endl<<"Perimeter is: "<<p<<endl;
    return 0;
}