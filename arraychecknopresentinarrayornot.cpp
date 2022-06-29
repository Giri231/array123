#include<iostream>

using namespace  std;

int main()
{
    int a[5],i,n;
    cout<<"enter any random no";
    for(i=0;i<=4;i++)
    {
        cin>>a[i];
    }
    cout<<"enter any random no =";
    cin>>n;
    for(i=0;i<=4;i++)
    {
        if(a[i]==n)
        {
            cout<<"Element found at index = "<<i;
            break;
        }

    }
}
