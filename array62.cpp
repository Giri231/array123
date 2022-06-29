#include<iostream>

using namespace std;

int main()
{
    int a[3][3],i,j;
    cout<<"enter the element of matrix";
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            cout<<"enter the array elemenet ";
            cin>>a[i][j];
        }
    }
    cout<<"the diagonal matrix we have";
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            if(i==j)
            {
                cout<<a[i][j];
            }
            else
                cout<<" ";

        }
        cout<<"\n";
    }
    }
