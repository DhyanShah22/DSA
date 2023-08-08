#include<iostream>

using namespace std;

struct Array
{
    int A[10];
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

int Get(struct Array arr, int index)
{
    if(index > 0 && index < arr.length)
    {
        return arr.A[index];
    }
    else
    {
        return -1;
    }
}

void set(struct Array *arr, int index, int x)
{
    if(index >= 0 && index < arr->length)
    {
        arr->A[index]=x;
    }
}

int Max(struct Array arr)
{
    int max = arr.A[0];
    int i;
    for(i=0;i<arr.length;i++)
    {
        if(arr.A[i] > max)
        {
            max = arr.A[i];
        }
    }
    return max;
}

int Min(struct Array arr)
{
    int min = arr.A[0];
    int i;
    for(i=0;i<arr.length;i++)
    {
        if(arr.A[i] < min)
        {
            min = arr.A[i];
        }
    }
    return min;
}

float Avg(struct Array arr)
{
    int s=0;
    int i;
    for(i=0;i<arr.length;i++)
    {
        s+=arr.A[i];
    }
    return (float)s/arr.length;
}

int main() 
{
    struct Array arr = {{2,3,4,5,6}, 10,5};

    cout<<Get(arr,2)<<endl;
    set(&arr,0,15);
    cout<<Max(arr)<<endl;
    cout<<Min(arr)<<endl;
    cout<<Avg(arr)<<endl;
    Display(arr);



    return 0;
}

