#include<iostream>

using namespace std;

int main()
{
    int a[5],i,n;
    for(i=0;i<=4;i++)
    {
        cin>>a[i];
    }
    cout<<"Reverse of list=";
    for(i=4;i>=0;i--)
    {
        cout<<a[i]<<endl;
    }
}
