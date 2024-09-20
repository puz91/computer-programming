#include<iostream>
using namespace std;
int main(){
    string w;
    getline(cin,w);
    char n[10]={'0','1','2','3','4','5','6','7','8','9'};
    int c=0,m;
    for(int i=0; i<w.length(); i++){
        if(w[i]=='0'){
            n[0]='-';
        }
        if(w[i]=='1'){
            n[1]='-';
        }
        if(w[i]=='2'){
            n[2]='-';
        }
        if(w[i]=='3'){
            n[3]='-';
        }
        if(w[i]=='4'){
            n[4]='-';
        }
        if(w[i]=='5'){
            n[5]='-';
        }
        if(w[i]=='6'){
            n[6]='-';
        }
        if(w[i]=='7'){
            n[7]='-';
        }
        if(w[i]=='8'){
            n[8]='-';
        }
        if(w[i]=='9'){
            n[9]='-';
        }
    }
    for(int k=0; k<10; k++){
        if(n[k]!='-'){
            m=k;
            c++;
        }
    }
    //cout<<m<<endl;
    for(int j=0; j<10; j++){
        if(n[j]!='-'){
            cout<<n[j];
            if(j!=m){
                cout<<',';
            }
        }
    }
    //cout<<c;
    if(c==0){
        cout<<"None";
    }
}