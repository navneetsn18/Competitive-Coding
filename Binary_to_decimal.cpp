#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num,temp,count=0,x,sum=0,i;
    cin>>num;
    temp=num;
    do
    {
        temp/=10;
        count++;
    }while(temp!=0);
    temp=num;
    for(i=0;i<count;i++)
    {
        x=temp%10;
        temp/=10;
        sum=sum+x*pow(2,i);
    }
    cout<<sum;
	return 0;
}
