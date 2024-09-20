#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string z;
    int x[n],y[n],b[n],r[n];
    int max,min;
    for(int i=0; i<n; i++){
        cin>>x[i];
        cin>>y[i];
    }
    cin>>z;
    if(z=="Zig-Zag"){
        for(int i=0; i<n; i++){
            if(i%2==0){
                b[i]=y[i];
                r[i]=x[i];
            }
            else{
                b[i]=x[i];
                r[i]=y[i];
            }
        }
        max=b[0];
        min=r[0];
        for(int i=0; i<n; i++){
            if(b[i]>max){
                max=b[i];
            }
            if(r[i]<min){
                min=r[i];
            }
        }
    }
    else if(z=="Zag-Zig"){
        for(int i=0; i<n; i++){
            if(i%2==0){
                r[i]=y[i];
                b[i]=x[i];
            }
            else{
                r[i]=x[i];
                b[i]=y[i];
            }
        }
        max=b[0];
        min=r[0];
        for(int i=0; i<n; i++){
            if(b[i]>max){
                max=b[i];
            }
            if(r[i]<min){
                min=r[i];
            }
        }
    }
    // for(int i=0; i<n; i++){
    //     cout<<b[i]<<' ';
    // }
    cout<<min<<' '<<max;
}