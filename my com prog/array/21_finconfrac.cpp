#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n,j;
    cin>>n;
    j=n;
    double a[n],c,d,b,e[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    d=a[n-1];
    //cout<<d;
    for(int k=0;k<n;k++){
        for(int i=j-1;i>=0;i--){
            c=a[i-1]+1/d;
            b=d;
            d=a[i-1]+1/d;
            //cout<<d<<" ";
        }
        j--;
        d=a[j-1];
        e[k]=b;
        b=0;
    }
    for(int l=n-1;l>=0;l--){
        cout<<setprecision(10)<<e[l]<<endl;
    }
}