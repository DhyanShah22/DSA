#include<iostream>

using namespace std;

struct Array
{
    int *A;
    int size;
    int length;
};

void Display(struct Array arr)
{
    int i;
    cout<<"\n"<<"Elements are:"<<"\n"<<endl;
    for(i=0; i<arr.length; i++)
    {
        cout<<arr.A[i]<<endl;;
    }
}

int main() 
{
    struct Array arr;

    cout<<"Enter size of an array"<<endl;
    cin>>arr.size;

    arr.A = new int[arr.size];
    arr.length = 0;

    int n,i;

    cout<<"Enter how many numbers?"<<endl;
    cin>>n;

    cout<<"Enter all elements"<<endl;
    for(i=0; i< n; i++)
    {
        cin>>arr.A[i];
    }
    arr.length = n;

    Display(arr);

    return 0;
}