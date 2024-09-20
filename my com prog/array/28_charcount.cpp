#include<iostream>
#include<string>
using namespace std;
int main(){
    string w;
    int c[26];
    for(int i=0; i<26; i++){
        c[i]=0;
    }
    getline(cin,w);
    for(int i=0; i<w.length(); i++){
        if(w[i]>='A'&&w[i]<='Z'){
            w[i]=w[i]-'A'+'a';
        }
    }
    for(int i=0; i<w.length(); i++){
        if(w[i]>='a'&&w[i]<='z'){
            c[w[i]-'a']++;
        }
    }
    for(int i=0; i<26; i++){
        if(c[i]!=0){
            char a=static_cast<char>(i+'a');
            cout<<a<<" -> "<<c[i]<<endl;
        }
    }
    //cout<<w;
}