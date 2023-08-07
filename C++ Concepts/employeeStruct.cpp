#include<iostream>

using namespace std;

struct Employee{
    string Name;
    int EID;
    float EXP;
    char G;
} e3;

int main() 
{
    struct Employee e1;
    struct Employee e2;

    e2.Name= "DhyanShah";
    e2.EID= 456;
    e2.EXP=6.5;
    e2.G= 'M';

    e3.Name= "DhyanAmitShah";
    e3.EID= 466;
    e3.EXP=4.5;
    e3.G= 'M';

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

    cout<<"The name of the employee is: "<<e2.Name<<endl;
    cout<<"The Employee user id is: "<<e2.EID<<endl;
    cout<<"The employee year of experience is: "<<e2.EXP<<endl;
    cout<<"The gender is: "<<e2.G<<endl;

    cout<<"The name of the employee is: "<<e3.Name<<endl;
    cout<<"The Employee user id is: "<<e3.EID<<endl;
    cout<<"The employee year of experience is: "<<e3.EXP<<endl;
    cout<<"The gender is: "<<e3.G<<endl;
    return 0;
}