#include<iostream>


using namespace std;

int main()
{
    int a[2][2],i,j
    ;
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            cin>>a[i][j];
        }
        cout<<"\n";
    }
     for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            cout<<a[j][i];
        }
        cout<<" \n";
    }


}
