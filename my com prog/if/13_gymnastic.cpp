#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

int main()

{
    float a,b,c,d,x,max,min;
    int n=0;
    cin>>a>>b>>c>>d;
    if(a==b||a==c||a==d||b==d||b==c||c==d){
        n++;
    }
    if(a<b&&a<c&&a<d){
        min=a;
    }
    if(b<a&&b<c&&b<d){
        min=b;
    }
    if(c<a&&c<b&&c<d){
        min=c;
    }
    if(d<a&&d<c&&d<b){
        min=d;
    }
    if(a>b&&a>c&&a>d){
        max=a;
    }
    if(b>a&&b>c&&b>d){
        max=b;
    }
    if(c>a&&c>b&&c>d){
        max=c;
    }
    if(d>a&&d>c&&d>b){
        max=d;
    }
    if(a==max||a==min){
        a=0;
    }
    if(b==max||b==min){
        b=0;
    }
    if(c==max||c==min){
        c=0;
    }
    if(d==max||d==min){
        d=0;
    }
    x=(a+b+c+d)/2;
    cout<<(static_cast<int>((x * 100) + 0.5)) / 100.0 ;
}