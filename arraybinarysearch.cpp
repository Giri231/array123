#include<iostream>

using namespace std;
int main()
{
    int a[5],i,s,e,mid,n,temp=-2;
    for(i=0;i<=4;i++)
    {
        cin>>a[i];
    }
    cout<<"enter any number your want to search =";
    cin>>n;

    s=0;
    e=4;
    while(s<=e)
    {
    mid=(s+e)/2;
    if(a[mid]==n)
    {
        temp =mid;
        break;
    }
    else if(n<a[mid])
    {
        e=mid-1;
    }
    else{
        s=mid+1;
    }
    }
    if(temp==-2)
    {
        cout<<"element not found";
    }
    else
    {
        cout<<"element found at index ="<<temp;
    }
}
