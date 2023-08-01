#include<iostream>

using namespace std;

int main() 
{
    int A[5] = {2,3,5,8,10};
    int *p;
    int i;

    p = new int[5];
    p[0]=3;
    p[1]=5;
    p[2]=9;
    p[3]=7;
    p[4]=13;

    for(i=0;i<5;i++)
    {
        cout<<A[i]<<endl;;
    }
    cout<<" "<<endl;
    for(i=0;i<5;i++)
    {
        cout<<p[i]<<endl;;
    }

}