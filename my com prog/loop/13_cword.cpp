#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int main(){
    int n=0;
    string word,text;
    cin>>word;
    cin.ignore();
    getline(cin,text);
    for(int i=0; i<text.length(); i++){
        if(text[i]==' '||text[i]=='\''||text[i]=='\"'||text[i]=='('||text[i]==')'||text[i]==','||text[i]=='.'){
            text[i]=' ';
        }
    }
    for(int i=0; i<text.length()-word.length()+1; i++){
        if(text.substr(i,word.length())==word){
            if((i==0||text[i-1]==' ')&&(i==text.length()-word.length()||text[i+word.length()]==' '))n++;
        }
    }
    cout<<n;
    return 0;
}
