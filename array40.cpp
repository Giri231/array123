#include<iostream>

using namespace std;

int main()
{
    int a[5],i,ele,flag=0;

    for(i=0;i<=4;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the element : ";
    cin>>ele;
    for(i=0;i<=4;i++)
    {
        if(ele==a[i])
        {
            flag++;
            break;
        }
    }
    if(flag==1)
    {
        cout<<i<<"is available";
    }
    else
    {
        cout<<"is not avaiable";
    }
}
