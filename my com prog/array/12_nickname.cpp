#include<iostream>
using namespace std;
int main(){
    string a[10]={"Robert","William","James","John","Margaret","Edward","Sarah","Andrew","Anthony","Deborah"};
    string b[10]={"Dick","Bill","Jim","Jack","Peggy","Ed","Sally","Andy","Tony","Debbie"};
    int n,m=0;
    cin>>n;
    string c[n];
    cout<<endl;
    for(int i=0; i<n; i++){
        cin>>c[i];
    }
    for(int j=0; j<n; j++){
        for(int k=0; k<10; k++){
            if(c[j]==a[k]){
                cout<<b[k]<<endl;
            }
            else if(c[j]==b[k]){
                cout<<a[k]<<endl;
            }
            if(c[j]!=b[k]){
                m++;
            }
            if(c[j]!=a[k]){
                m++;
            }
        }
    //cout<<m<<endl;
    if(m==20){
        cout<<"Not found"<<endl;
    }
    m=0;
    }
    
}