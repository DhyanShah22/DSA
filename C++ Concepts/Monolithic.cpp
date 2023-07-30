#include<iostream>

using namespace std;

int main() 
{
    int length, breadth;

    cout<<"Enter the length and the breadth of the rectangle"<<endl;
    cin>>length>>breadth;

    int area = length*breadth;
    int perimeter = 2*(length + breadth);

    cout<<"Area is: "<<area<<endl<<"Perimeter is: "<<perimeter<<endl;
    return 0;
}