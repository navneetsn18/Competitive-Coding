#include <iostream>
using namespace std;
int main()
{
    int num,temp,i,j,n=0,arr[10],arr1[10],sum=0;
    cin>>num;
    temp=num;
    do
    {
        temp/=10;
        n++;
    }while(temp!=0);
    temp=num;
    for(i=1;i<=n;i++)
    {
        arr[i]=temp%10;
        temp/=10;
    }
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=n;j++)
        {
            if(arr[i]==j)
            {
                arr1[j]=i;
            }
        }
    }
    for(i=n;i>=1;i--)
    {
        sum=sum*10+arr1[i];
    }
    if(sum==num)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    return 0;
}
