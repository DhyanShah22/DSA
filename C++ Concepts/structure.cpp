#include<iostream>

using namespace std;

struct rectangle {
    int length;
    int breadth;
} r2;

int main() {
    struct rectangle r1={10,5};

    cout<<sizeof(r1)<<endl;
    cout<<r1.length<<endl;
    cout<<r1.breadth<<endl;
    cout<<"The area of the rectangle r1 is: "<<(r1.length)*(r1.breadth)<<endl;
 
    cout<<"Enter the length and breadth of the rectangle r2"<<endl;
    cin>>r2.length;
    cin>>r2.breadth;

    cout<<"The area of the rectangle r2 is: "<<(r2.length) * (r2.breadth)<<endl;
    return 0;
}
