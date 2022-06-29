#include<iostream>

using namespace std;

int main()
{
    int array[3][3];
    int i,j;
    cout<<"Enter 2D array elements";
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            cin>>array[i][j];
        }
    }
    cout<<"the whole matrix is"<<"\n ";
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
                        cout<<array[i][j];
        }
        cout<<"\n";
    }
}
