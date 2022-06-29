#include<iostream>

using namespace std;

int main()
{
    int a[5],i,n,flag=0;
    for(i=0;i<=4;i++)
    {
        cin>>a[i];
    }
    cout<<"enter no ";
    cin>>n;
    for(i=0;i<=4;i++)
    {
        if(a[i]==n)
        {
         flag++;
         break;
        }
    }
    if(flag==1)
    {
        cout<<"available";
    }
    else
    {
        cout<<"not available";
    }
}
