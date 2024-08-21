#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int s=0,m=0,o=0,n=0;
    vector<string> k;
    string w;
    while(true){
        getline(cin,w);
        if(w.empty())break;
        k.push_back(w);
    }
    for(int i=0; i<k.size(); i++){
        if(k[i].length()>=12){
            for(int j=0; j<k[i].length(); j++){
                if(k[i][j]>='A'&&k[i][j]<='Z'){
                    m=1; 
                }
                else if(k[i][j]>='a'&&k[i][j]<='z'){
                    s=1;
                }
                else if(k[i][j]>='0'&&k[i][j]<='9'){
                    n=1;
                }
                else{
                    o=1;
                }
            }
            if(m==1&&s==1&&n==1&&o==1){
                cout<<"strong"<<endl;
            }
            m=0;
            s=0;
            n=0;
            o=0;
        }
        else if(w.length()>=8){
            for(int j=0; j<k[i].length(); j++){
                if(k[i][j]>='A'&&k[i][j]<='Z'){
                    m=1; 
                }
                else if(k[i][j]>='a'&&k[i][j]<='z'){
                    s=1;
                }
                else if(k[i][j]>='0'&&k[i][j]<='9'){
                    n=1;
                }
            }
            if(m==1&&s==1&&n==1){
                cout<<"weak"<<endl;
            }
            m=0;
            s=0;
            n=0;
            o=0;
        }
        else{
            cout<<"invalid"<<endl;
        }
    }
}
