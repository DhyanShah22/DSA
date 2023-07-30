#include<iostream>

using namespace std;

void func(int *A, int n ) 
{
    A[0] =15;
    
}
int main() 
{
    int A[] = {2,4,6,8,10};
    int n = 5;
    func(A,n);

    for(int x:A) 
    {
        cout<<x<<" "<<endl;
    }
    return 0;
}