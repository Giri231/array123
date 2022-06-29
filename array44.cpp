#include<iostream>

using namespace std;

int main()
{
    int a[5],i,n,t;
    for(i=0;i<=4;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the no of times you want to rotate";
    cin>>n;
    for(i=0;i<=4;i++)
    {
        t=a[0];
        a[0]=a[i];
        a[i]=t;
    }n--;
    cout<<"The array is";
    for(i=0;i<=4;i++)
    {
        cout<<a[i];
    }
}

