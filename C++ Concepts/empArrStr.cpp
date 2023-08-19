#include<iostream>

using namespace std;

struct Student {
    char Name[20];
    string RollNo;
    float CGPA;
};

int main() 
{
    struct Student s[15];
    int i;
    for(i=0; i<5;i++)
    {
        cin>>s[i].Name;
        cin>>s[i].RollNo;
        cin>>s[i].CGPA;
    }

    for(i=0; i<5;i++)
    {
    cout<<"The name of the student is "<<s[i].Name<<endl;
    cout<<"The roll number is "<<s[i].RollNo<<endl;
    cout<<"The CGPA of the student is "<<s[i].CGPA<<endl;
    }
    return 0;
}