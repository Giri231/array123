#include<iostream>
using namespace std;

int main()
{
    int a[5],i,n,ele;

    for(i=0;i<=4;i++)
    {
        cin>>a[i];
    }


    cout<<"Enter the Position "<<" "<<"Enter the element";
    cin>>n>>ele;
    for(i=4;i>=n;i--)
    {
        a[i+1]=a[i];
    }
    a[n]=ele;
    for(i=0;i<=4;i++)
    {
        cout<<a[i];
    }
}
