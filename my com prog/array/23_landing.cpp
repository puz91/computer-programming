#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    int n,z=0;
    cin>>n;
    string c[n],f;
    vector<string> q; 
    int m[n];
    for(int i=0; i<n; i++){
        cin>>c[i]>>m[i];
    }
    cin.ignore();
    getline(cin,f);
    for(int i=0; i<f.length();i++){
        if(f[i]=='-'){
            q.push_back(f.substr(i+1,2));
        }
    }
    for(int i=q.size()-1; i>0;i--){
        if(q[i]!=q[i-1]){
            for(int j=0; j<n; j++){
                if(q[i]==c[j]){
                    //cout<<m[j]<<" ";
                    z+=m[j];
                }
            }
        }
    }
    cout<<z;
}