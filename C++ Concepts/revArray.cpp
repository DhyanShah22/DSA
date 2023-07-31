#include<iostream>

using namespace std;

int main()
{
    int arr[5] = {2,4,6,8,10};
    int i,j,temp;
    int brr[5];

    for(i=0, j=4; i<=2; i++, j--)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    
    for(i=0; i<5; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}