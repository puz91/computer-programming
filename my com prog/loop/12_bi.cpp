#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
    double l=0,a,x,u;
    cin>>a;
    u=a;
    x=u/2;
    do{
        pow(10,x)>a?u=x:l=x;
        x=(u+l)/2;

    }while((u-l)>1e-10);
    //1e-10
    cout<<x;
    return 0;
}