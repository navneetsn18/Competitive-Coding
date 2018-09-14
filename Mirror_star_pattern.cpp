#include<iostream>
using namespace std;
int main()
{
    int i,j,a;
    cin>>a;
    if(a%2!=0)
    {
        for(i=0;i<a/2+1;i++)
        {
           for(j=0;j<a;j++)
           {
               if(i+j>=a/2 && j-i<=a/2)
               cout<<"* ";
               else
               cout<<"  ";
           }
           cout<<"\n";
        }
        for(i=a/2+1;i<a;i++)
        {
           for(j=0;j<a;j++)
           {
               if(i-j<=a/2 && i+j<a+a/2)
               cout<<"* ";
               else
               cout<<"  ";
           }
           cout<<"\n";
        }
    }
    return 0;
}
