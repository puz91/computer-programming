#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main(){
    string a,b;
    int n=0;
    getline(cin,a);
    getline(cin,b);
    if(a.length()!=b.length()){
        cout<<"Incomplete answer";
    }
    else{
        for(int i=0;i<a.length();i++){
            if(a[i]==b[i]){
                n++;
            }
        }
        cout<<n;
    }
}