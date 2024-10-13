#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,k;
    cin>>n;
    vector<int> v;
    vector<int> s;
    while(n!=-1){
        cin>>n;
        if(n!=-1){v.push_back(n);}
    }
    for(int i=0; i<v.size(); i++){
        if(i%2==0){s.push_back(v[i]);}
        else{s.insert(s.begin(),v[i]);}
    }
    cout<<'[';
    for(int i=0; i<s.size(); i++){
        if(i!=s.size()-1){ cout<<s[i]<<", ";}
        else{cout<<s[i];}
    }
    cout<<']';

}