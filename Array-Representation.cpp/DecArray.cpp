#include<iostream>

using namespace std;

int main()  
{
    int A[5];
    int i;
    for(i=0; i<5; i++)
    {
        cout<<&A[i]<<endl;
    }
    return 0;
}