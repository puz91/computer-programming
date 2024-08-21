#include<iostream>
using namespace std;
int main(){
    int n,c=1;
    string w,r="";
    cin>>w>>n;
    for(int i=0; i<w.size(); i++){
        if(w[i]==w[i+1]){
            c++;
        }
        else{
            //cout<<c;
            if(c<n){
                r.append(w.substr(i-c+1,c));
                
            }
            c=1;
        }
    }
    cout<<r;
    
}