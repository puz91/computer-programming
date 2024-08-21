#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
double bisec(double l,double a){
    double x;
    x=(l+a)/2;
    while(x>=l&&x<=a){
        if(abs(a-(pow(x,2))) <= pow(10,-10) * max(a,pow(x,2))){
            return x;
        }
        if(pow(x,2)>a){
            return bisec(l,x);
        }
        if(pow(x,2)<a){
            return bisec(x,a);
        }
    }
}
int main(){
    double l=0,a;
    cin>>a;
    cout<<bisec(l,a);
}