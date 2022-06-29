#include<iostream>

using namespace std;

int main()
{
    int a[5],i,sum=0;
    cout<<"Enter five elements =";
    for(i=0;i<=4;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<=5;i++)
    {
        sum=a[i]+sum;

    }
     cout<<"Sum ="<<sum;
}
