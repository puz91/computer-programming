#include<iostream>
using namespace std;
int main(){
    int n,m,u=0,t=0;
    cin>>n;
    m=n/2;
    string card[n],temp,f[n],b[n];
    string cs;
    for(int i=0; i<n; i++){
        cin>>card[i];
    }
    cin.ignore();
    getline(cin,cs);
    for(int i=0; i<cs.length(); i++){
        if(cs[i]=='C'){
            for(int j=0; j<m; j++){
                temp=card[j];
                card[j]=card[j+m];
                card[j+m]=temp;
            }
        }
        else if(cs[i]=='S'){
            for(int j=0; j<m; j++){
                f[j]=card[j];
            }
            for(int j=m; j<n; j++){
                b[j-m]=card[j];
            }
            for(int j=0; j<n; j++){
                //cout<<b[j]<<j;
                if(j%2==0){
                    card[j]=f[u];
                    u++;
                }
                else{
                    card[j]=b[t];
                    t++;
                }
            }
        }
        u=0;
        t=0;
    }
    for(int i=0; i<n; i++){
        cout<<card[i]<<" ";
    }
}