#include<iostream>

using namespace std;

int main()
{
    int a[5],min,i;
    cout<<"enter five elements";
    for(i=0;i<=4;i++)
    {
        cin>>a[i];
    }
    min=a[0];
    for(i=1;i<=4;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    cout<<"min element ="<<min;
}
