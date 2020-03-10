/* Convert Roman Numbers to decimals */

#include<iostream>
#include<string>
using namespace std;
int val(char c)
{
    switch(c)
    {
        case 'I':return 1;
        case 'V':return 5;
        case 'X':return 10;
        case 'L':return 50;
        case 'C':return 100;
        case 'D':return 500;
        case 'M':return 1000;
        default: return 0;
    }
}
int getInt(string str)
{
    int ans=0,pos=0,i;
    for(i=str.size()-1;i>=0;i--)
    {
         if(val(str[i])>=pos)
         {
             ans+=val(str[i]);
         }
         else
         {
             ans-=val(str[i]);
         }
         pos=val(str[i]);
    }
    return ans;
}
int main()
{
    string str;
    int i,res,check=0;
    cout<<"Enter the roman number: ";
    cin>>str;
    for(i=0;i<str.size();i++)
    {
        if(str[i]>=97 && str[i]<=122)
        {
            str[i]-=32;
        }
        if(val(str[i])==0)
        {
            check=1;
            break;
        }
    }
    if(check==0)
    {
        res=getInt(str);
        cout<<"\nThe value of "<<str<<" is "<<res;
    }
    else
    {
        cout<<"\nInvalid Input.";
    }
    return 0;
}
