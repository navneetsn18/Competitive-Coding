#include <iostream>
using namespace std;
int main() 
{
    int num,i,flag=0;
    cin>>num;
    for(i=2;i<num/2;i++)
    {
        if(num%i==0)
            flag=1;
    }
    if(flag==1)
        cout<<"Not Prime";
    else
        cout<<"Prime";
    return 0;
}
