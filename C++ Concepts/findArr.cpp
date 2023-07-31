#include<iostream>

using namespace std;

int main() 
{
    int arr[5];
    int i;
    int n;
    for(i=0; i<5;i++)
    {
        cout<<"Enter the number"<<endl;
        cin>>arr[i];
    }
    for(i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<"Enter number to find"<<endl;
    cin>>n;
    for(i=0;i<5;i++)
    {
        if (n == arr[i])
        {
            cout<<"The index is: "<<i<<endl;
            break;
        }
    }
    
}