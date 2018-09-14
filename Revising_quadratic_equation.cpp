cout<<r1<<" "<<r2#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    float a,b,c,r1,r2,d,i1,i2;
    cin>>a>>b>>c;
    if(a!=0){
        d=pow(b,2)-4*a*c;
        if(d>0){
            cout<<"Real and Distinct\n";
            r1=(-b-sqrt(d))/2*a;
            r2=(-b+sqrt(d))/2*a;
            cout<<r1<<" "<<r2;
        }
        else if(d==0){
            cout<<"Real and Equal\n";
            r1=(-b-sqrt(d))/2*a;
            r2=(-b+sqrt(d))/2*a;
            cout<<r1<<" "<<r2;
        }
        else{
            cout<<"Imaginary\n";
            r1=-b/2*a;
            r2=-b/2*a;
            i1=-sqrt(-d);
            i2=sqrt(-d);
            cout<<r1<<i1<<"i"<<" "<<r2<<"+"<<i2<<"i";
        }
    }
    return 0;
}
