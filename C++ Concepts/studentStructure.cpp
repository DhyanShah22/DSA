#include<iostream>

using namespace std;

struct Student {
    char Name[20];
    string RollNo;
    float CGPA;
};

int main() 
{
    struct Student s1;
    cin>>s1.Name;
    cin>>s1.RollNo;
    cin>>s1.CGPA;

    cout<<"The name of the student is "<<s1.Name<<endl;
    cout<<"The roll number is "<<s1.RollNo<<endl;
    cout<<"The CGPA of the student is "<<s1.CGPA<<endl;

    return 0;
}