#include<iostream>

using namespace std;


int main()
{
    int a1[5][5],a2[5][5],i,j,sum[5][5];
    cout<<"enter elements of a1 matrix";
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=4;j++)
        {
            cin>>a1[i][j];
        }

    }

    cout<<"enter elements of a2 matrix";
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=4;j++)
        {
            cin>>a2[i][j];
        }
    }
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=4;j++)
        {
         sum[i][j]=a1[i][j]+a2[i][j];
        }
    }
    cout<<"sum of matrix";
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=4;j++)
        {
            cout<<sum[i][j];
        }
        cout<<"\n";
    }
}
