#include<iostream>
using namespace std;
int main() 
{
    int n1,n2[1000],n3,i,x=-1;
    cin>>n1;
    if(n1>=0)
    {
        for(i=0;i<n1;i++)
        {
            cin>>n2[i];
        }
        cin>>n3;
        for(i=0;i<n1;i++)
        {
            if(n2[i]==n3)
            {
                cout<<i;
                x++;
            }
        }
        if(x==-1)
        cout<<"-1";
    }
	return 0;
}
