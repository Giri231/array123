#include<iostream>

using namespace std;

int main()

{
    int a1[3][3],a2[3][3],a3[3][3], i,j,k,sum;
    cout<<"first matrix";
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            cin>>a1[i][j];
        }
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            cin>>a2[i][j];
        }
    }
    for(i=0;i<=2;i++)
    {

        for(j=0;j<=2;j++)
        {
            sum=0;
                sum=sum+a1[i][j]*a2[i][j];
                a3[i][j]=sum;

        }
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            cout<<a3[i][j];
        }
        cout<<"\n";
    }

}
