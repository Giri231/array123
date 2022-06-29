#include<iostream>

using namespace std;

int main()
{
    int a[5],i,n;
    for(i=0;i<=4;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the position";
    cin>>n;
    for(i=n;i<=4;i++)
    {
        a[i]=a[i+1];
    }
    for(i=0;i<=4;i++)
    {
        cout<<a[i];
            }

}
