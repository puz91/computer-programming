#include<iostream>
#include<string>
using namespace std;
int main(){
    string e;
    getline(cin,e);
    for(int i=0;i<e.length();i++){
        if(e[i]=='('){
            e[i]='[';
        }
        else if(e[i]=='['){
            e[i]='(';
        }
        else if(e[i]==')'){
            e[i]=']';
        }
        else if(e[i]==']'){
            e[i]=')';
        }
    }
    cout<<e;
}