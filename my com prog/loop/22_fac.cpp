#include<iostream>
using namespace std;
int main(){
    int n,i=2;
    bool c=true;
    cin>>n;
    while(n>1){
        if(n%i==0){
            if(!c){
                cout<<"*";
            }
            cout<<i;
            n=n/i;
            c=false;
        }
        else{
            i++;
        }
    }
}