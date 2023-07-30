#include<iostream> 

using namespace std;

int main () {
    int A[5] = {2,4,6,8,9};
    int i;

    for(i=0; i<5; i++) {
        cout<<A[i]<<endl;
    }

    int n;
    cout<<"Enter the number of elements in the array"<<endl;
    cin>>n;

    int B[n];

    for(i=0; i<n; i++)
    {
        cout<<"Enter a number"<<endl;
        cin>>B[i];
    }

    for(i=0; i<n; i++) {
        cout<<B[i]<<endl;
    }
    cout<<sizeof(A)<<endl;

    int j;
    int C[3][3];

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cout<<"Enter a number"<<endl;
            cin>>C[i][j];
        }
    }

     for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cout<<"\t"<<C[i][j];
        }
        cout<<"\n";
    }
}