#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int w[n],x[n],ans=0,pmax[n],smax[n],pm,sm,m,s;
    for(int i=0; i<n; i++){
        cin>>w[i];
    }
    pm=w[0];
    sm=w[n-1];
    int j=0,k=0;
    for(int i=0; i<n; i++){
        if(w[i]>=pm){
            pmax[j]=i;
            j++;
            pm=w[i];
        }
    }
    for(int i=n-1; i>=0; i--){
        if(w[i]>=sm){
            smax[k]=i;
            k++;
            sm=w[i];
        }
    }
    int d=0,f=0;
    for(int i=0; i<n; i++){
        if(i>pmax[j-1]){
            x[i]=w[i];
        }
        else if(i==pmax[d]){
            x[i]=w[pmax[d]];
            d++;
            //cout<<d<<endl;
        }
        else if(i<pmax[d]){
            x[i]=w[pmax[d-1]];
        }
    }
    for(int i=n-1; i>=smax[k-1]; i--){
        if(smax[f]==i){
            x[i]=w[smax[f]];
            f++;
        }
        else{
            x[i]=w[smax[f-1]];
        }
    }

    for(int i=0; i<n; i++){
        ans+=x[i]-w[i];
    }
    cout<<ans;
    

    
    // for(int i=0; i<k; i++){
    //     cout<<smax[i]<<' ';
    // }
    // cout<<endl;
    // for(int i=0; i<j; i++){
    //     cout<<pmax[i]<<' ';
    // }

}