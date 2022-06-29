#include<iostream>

using namespace std;

int main()

{
    int a[5],i,sum=0,avg;
    for(i=0;i<=4;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<=4;i++)
    {
        sum=sum+a[i];
        avg=sum/5;
    }
    cout<<sum<< " "<<avg;
}
