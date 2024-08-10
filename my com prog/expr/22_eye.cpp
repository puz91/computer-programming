#include<iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()

{
    float xe,ye,re,rp,xm,ym,r,a,b,c,x,y,rx,ry;
    cin>>xe>>ye>>re>>rp>>xm>>ym;
    r=re-rp;
    a=xm-xe;
    b=ym-ye;
    c=sqrt(a*a+b*b);
    x=r/c*a;
    y=r/c*b;
    rx=xe+x;
    ry=ye+y;
    cout<<round(rx)<<" "<<round(ry);
    return 0;
}