#include<iostream>
using namespace std;
int main() 
{
    int num,nnum=0,nnnum=0,x,temp;
    cin>>num;
    do
    {
        x=num%8;
        num/=8;
        nnum=nnum*10+x;
    }while(num!=0);
    do
    {
        temp=nnum%10;
        nnum/=10;
        nnnum=nnnum*10+temp;
    }while(nnum!=0);
    cout<<nnnum;
	return 0;
}
