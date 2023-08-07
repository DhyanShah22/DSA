#include<iostream>

using namespace std;

struct Employee{
    string Name;
    int EID;
    float EXP;
    char G;
};

int main() 
{
    struct Employee e1;
    cout<<"Enter Employee name"<<endl;
    cin>>e1.Name;
    cout<<"Enter Employee user id."<<endl;
    cin>>e1.EID;
    cout<<"Enter years of experience."<<endl;
    cin>>e1.EXP;
    cout<<"Enter gender."<<endl;
    cin>>e1.G;

    cout<<endl;

    cout<<"The name of the employee is: "<<e1.Name<<endl;
    cout<<"The Employee user id is: "<<e1.EID<<endl;
    cout<<"The employee year of experience is: "<<e1.EXP<<endl;
    cout<<"The gender is: "<<e1.G<<endl;
    return 0;
}