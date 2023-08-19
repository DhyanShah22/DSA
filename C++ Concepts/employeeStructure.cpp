#include<iostream>

using namespace std;

struct Employee {
    char Name[20];
    int Salary;
    float exp;
};

int main() 
{
    struct Employee e1,e2;
    cin>>e1.Name;
    cin>>e1.exp;
    cin>>e1.Salary;

    cout<<"The name of the employee is "<<e1.Name<<endl;
    cout<<"The years of experience is "<<e1.exp<<endl;
    cout<<"The salary of the employee is "<<e1.Salary<<endl;

    return 0;
}