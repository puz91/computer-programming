#include<iostream>
using namespace std;
int main(){
    float p,t=1,k=1;
    cin>>p;
    while(true){
        t=t*(365-(k-1))/365;
        if(1-t>=p){
            cout<<k;
            break;
        }
        else{
            k++;
            //cout<<k;
        }
    }

}