#include <iostream>
using namespace std;
void check(char ch)
{
    int num;
    num=ch;
    if(num>=65 && num<=90)
        cout<<"U";
    else if(num>=97 && num<=122)
        cout<<"L";
    else
        cout<<"I";
}
int main() 
{
    char ch,ret;
    cin>>ch;
    check(ch);
    return 0;   
}
