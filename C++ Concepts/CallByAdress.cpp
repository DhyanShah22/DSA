#include<iostream>

using namespace std;

void swap(int *x, int *y)
{
    int temp;
    temp= *x;
    *x=*y;
    *y= temp;
}

int main() {
    int num1= 10, num2=25;
    cout<<"Before Swap: "<<endl<<num1<<endl<<num2<<endl;

    swap(&num1, &num2);
     cout<<"After Swap: "<<endl<<num1<<endl<<num2<<endl;
    return 0;
}