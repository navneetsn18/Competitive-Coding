#include<iostream>
using namespace std;
int main() 
{
    int num,i,j;
    cin>>num;
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j;
        }
        for(j=1;j<=num-i;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
	return 0;
}
