#include<iostream>

using namespace std;

int main()
{
    int arr[5]= {1,4,6,3,8};
    int i,t;
    int largest = arr[0];
    int secondLargest = arr[1];

    for(i=2;i<5;i++)
    {
        if(arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
    }
    cout<<secondLargest<<endl;
    return 0;
}