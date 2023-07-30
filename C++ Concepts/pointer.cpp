#include<iostream>

using namespace std;

int main()
{
    int a =10;
    int *p;

    p=&a;

    cout<<"Integer a: "<<a<<endl;
    cout<<"Adress via pointer: "<<p<<endl;
    cout<<"Adress via integer a:"<<&a<<endl;
    cout<<"value of a via pointer: "<<*p<<endl;

    int C[5] = {1,2,3,4,5};
    int *t;

    t=C;
    cout<<t<<endl;
    for (int i=0;i<5;i++)
    {
        cout<<t[i]<<endl;
    }

    int *x;
    x=new int[5];

    x[0]=1; x[1]=2; x[2]=3; x[3]=4; x[4]=5;
    for (int i=0;i<5;i++)
    {
        cout<<x[i]<<endl;
    }

    delete[ ] x;

    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct triangle *p5;

    cout<<sizeof(p1)<<endl;
    cout<<sizeof(p2)<<endl;
    cout<<sizeof(p3)<<endl;
    cout<<sizeof(p4)<<endl;
    cout<<sizeof(p5)<<endl;
    return 0;
}