#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float n=0,a,s=0,avg=0;
    cin>>a;
    if(a==-1){
        cout<<"No Data";
        return 0;
    }
    while(a!=-1){
        s=s+a;
        cin>>a;
        n++;
    }
    avg=s/n;
    cout<<round(avg*100)/100;
}