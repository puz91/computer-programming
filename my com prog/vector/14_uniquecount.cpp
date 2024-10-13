#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    vector<int> v;
    vector<int> s;
    int c=1;
    while(cin>>n){
        v.push_back(n);
    }
    sort(v.begin(),v.end());
    s.push_back(v[0]);
    for(int i=1; i<v.size(); i++){
        if(v[i]!=v[i-1]){
            c++;
            s.push_back(v[i]);
        }
    }
    cout<<c<<endl;
    for(int i=0; i<s.size(); i++){
        if(i==10){break;}
        cout<<s[i]<<' ';
    }
}