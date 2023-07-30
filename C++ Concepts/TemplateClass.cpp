#include<iostream>

using namespace std;

class Arithmetic
{
private:
    int a;
    int b;
public:
    Arithmetic(int a, int b)
    {
        this->a=a;
        this->b=b;
    }
    int add()
    {
        int c = a+b;
        return c;
    }
    int sub()
    {
        int c = a-b;
        return c;
    }
};

int main() 
{
    Arithmetic ar(10,5);

    cout<<"Add: "<<ar.add()<<endl;
    cout<<"Sub: "<<ar.sub()<<endl;
    return 0;
}