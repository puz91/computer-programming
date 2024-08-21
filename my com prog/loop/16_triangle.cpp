#include<iostream>
using namespace std;
int main(){
    int n,m,k;
    cin>>n;
    m=n-1;
    k=n-3;
    for(int i=n;i>0;i--){
        for(int j=i-n;j<n;j++){
            if(i==n){
                if(j==m){
                cout<<"*";     
                }
                else{
                    cout<<".";
                }
            }
            else if(i==1){
                cout<<"*";
            }
            else{
                if(j==m){
                cout<<"*";     
                }
                else if(j==k){
                    cout<<"*";
                    k=k-2;
                }
                else{
                    //cout<<j<<" ";
                    cout<<".";
                }
            }
            
        }
        cout<<endl;
    }
}