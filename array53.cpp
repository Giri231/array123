#include<iostream>

using namespace std;

int main()
{
    int month[12]={31,29,31,30,31,30,31,30,31,31,30,31,30,31};
    int d,m,i,total=0;

    cout<<"enter the day";
    cin>>d;
    cout<<"enter the month";
    cin>>m;
    for(i=m;i<12;i++)
    {
        sum=sum+month[i];
    }
    sum=month[m-1] -d;
    cin>>sum;
}
