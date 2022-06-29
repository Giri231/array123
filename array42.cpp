#include<iostream>

using namespace std;

int main()
{
    int a[5],i,n,no,temp;
    for(i=0;i<=4;i++)
    {
        cin>>a[i];
    }
  cout<<"enter the number of times you want to rotate";
  cin>>n;

while(n>0){
    for(i=0;i<=4;i++)
    {
        temp=a[0];
        a[0]=a[i];
        a[i]=temp;
    }no--;
}
  cout<<"the array is:"<<endl;
  for(i=0;i<=4;i++)
    cout<<a[i]<<endl;

}
