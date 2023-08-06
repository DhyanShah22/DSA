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

void Append(struct Array *arr, int x)
{
    if(arr->length < arr->size)
    {
        arr->A[arr->length++] = x;
    }
}

void Insert(struct Array *arr, int index, int x)
{
    int i;
    if(index>=0 && index < arr->length)
    {
        for (i=arr->length; i> index; i--)
        {
            arr->A[i]=arr->A[i-1];
        }
        arr->A[index]=x;
        arr->length++;
    }
}

int Delete( struct Array *arr, int index)
{
    int x=0;
    int i=0;

    if(index>=0 && index < arr->length)
    {
        x=arr->A[index];
        for(i=index; i< arr->length; i++)
        {
            arr->A[i]= arr->A[i+1];
        }
        arr->length--;
        return x;
    }
    return 0;
}

int LinearSearch(struct Array arr, int key)
{
    int i;
    for(i=0; i< arr.length; i++)
    {
        if(key==arr.A[i])
        {
            return i;
        }
    }
    return -1;
}
int main() 
{
    struct Array arr = {{2,3,4,5,6,},10,5};

    cout<<"\n"<<LinearSearch(arr, 4)<<endl;
    Display(arr);

    return 0;
}  