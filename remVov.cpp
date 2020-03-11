/* Write a function that takes a string as input and reverse only the vowels of a string. */

#include<iostream>
#include<string>
using namespace std;
void getVov(string str)
{
    char vov[str.size()], temp;
    int i,j=0;
    for(i=0;i<str.size();i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            vov[j++]=str[i];
        }
    }
    for(i=0;i<str.size();i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            str[i]=vov[--j];
        }
    }
    cout<<"The string after reverse of vovels is: "<<str;
}
int main()
{
    string str;
    cout<<"Enter the string: ";
    cin>>str;
    getVov(str);
    return 0;
}