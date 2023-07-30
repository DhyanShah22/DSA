#include<iostream>

using namespace std;

class Rectangle 
{
private:
    int length;
    int breadth;
public:

    Rectangle(int l, int b)
    {
        length=l;
        breadth=b;
    }
    int area() 
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
    void setLength(int l)
    {
        length=l;
    }
    void setBreadth(int b)
    {
        breadth=b;
    }
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    ~Rectangle()
    {
        cout<<"Destructor"<<endl;
    }
};
int main() 
{
    Rectangle r(20,5);
    cout<<"Area "<<r.area()<<endl;
    cout<<"Perimeter "<<r.perimeter()<<endl;
   
    return 0;
}