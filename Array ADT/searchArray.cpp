#include<iostream>

using namespace std;

int main()
{
    int n,i;
    int arr[5] = {24,56,7,88,54};
    cout<<"Enter the number to find"<<endl;
    cin>>n;

    for(i=0;i<5;i++)
    {
        if(arr[i] == n)
        {
            cout<<"The element is present at index: "<<i<<endl;
        }
    }
    return 0;
}