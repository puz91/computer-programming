#include<iostream>
#include<utility>
#include<vector>
using namespace std;
int main(){
    int n,m,c,z;
    c=0;
    vector<pair<int,int> > d;
    cin>>n;
    m=n*n;
    int t[m];
    vector<int> till;
    for(int i=0; i<m; i++){
        cin>>t[i];
    }
    for(int i=0; i<m; i++){
        if(t[i]!=0){till.push_back(t[i]); }
        else{z=i;}
    }
    for(int i=0; i<m-1; i++){
        for(int j=i+1; j<m-1; j++){
            d.push_back(make_pair(till[i],till[j]));
            //cout<<i<<' '<<j<<' '; 
        }
        //cout<<endl; 
    }
    for(int i=0; i<d.size(); i++){
        if(d[i].first>d[i].second){c++;}
        //cout<<d[i].first<<' '<<d[i].second<<endl;
    }
    if(n%2==1){
        if(c%2==0){cout<<"YES";}
        else{cout<<"NO";}
    }
    else{
        if(c%2==1&&(z/n)%2==0){cout<<"YES";}
        else if(c%2==0&&(z/n)%2==1){cout<<"YES";}
        else{cout<<"NO";}
    }
    
}