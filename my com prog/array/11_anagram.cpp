#include<iostream>
#include<set>
using namespace std;
int main(){
    string s1,s2;
    char t;
    multiset<char> w1,w2;
    getline(cin,s1);
    getline(cin,s2);
    for(int i=0;i<s1.length();i++){
        if(s1[i]>='A'&&s1[i]<='Z'){
            s1[i]=s1[i]-'A'+'a';
        }
        if(s1[i]!=' '){
            w1.insert(s1[i]);
        }
    }
    for(int i=0;i<s2.length();i++){
        if(s2[i]>='A'&&s2[i]<='Z'){
            s2[i]=s2[i]-'A'+'a';
        }
        if(s2[i]!=' '){
            w2.insert(s2[i]);
        }
    }
    if(w1==w2){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}