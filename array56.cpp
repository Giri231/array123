#include<iostream>

using namespace std;

int main()
{
    int a[5],i,t,j;
     for(i=0;i<=4;i++)
     {
         cin>>a[i];
     }

     for(i=0;i<=4;i++)
     {
         for(j=0;j<=4;j++)
         {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
         }
    }
     for(i=0;i<=4;i++)
     {
         cout<<a[i];
     }
}
