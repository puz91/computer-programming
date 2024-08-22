#include<iostream>
#include<vector>
using namespace std;
int main(){
    int score;
    bool check=true;
    char c[7]={'R','Y','G','N','B','P','K'};
    int N,n,r,f;
    string aim,b;
    vector<string> ball;
    cin>>N;
    cin.ignore();
    for(int i=0; i<N; i++){
        getline(cin,aim);
        b.clear();
        for(int j=0; j<aim.length(); j+=2){
            b+=aim[j];
        }

        //count score
        score=0;
        for(int j=0; j<b.length(); j++){
            for(int k=0; k<7; k++){
                if(b[j]==c[k]){score+=(k+1);}
            }
        }

        if(b[0]!='R'){
            cout<<"WRONG_INPUT"<<endl;
            continue;
        }
        else if(b[0]=='R'&&b.length()==1){
            cout<<score<<endl;
            continue;
        }

        check=true;

        //check R R
        for(int j=0; j<b.length(); j++){
            if(b[j]=='R'&&b[j+1]=='R'){
                check=false;
            }
        }

        //find last R
        for(int j=0; j<b.length(); j++){
            if(b[j]=='R'){r=j;}
        }

        //check pair R
        for(int j=r; j>=0; j-=2){
            if(b[j]!='R'){check=false;}
        }

        //find behide last R
        for(int j=0; j<7; j++){
            if(b[r+2]==c[j]){f=j;}
        }

        //reset to Y
        f=1;

        //check behide last R
        for(int j=r+2; j<b.length(); j++){
            if(b[j]!=c[f]){check=false; break;}
            else if(b[j]==c[f]){f++;}
        }

        //check R first
        if(b[0]!='R'||check==false){
            cout<<"WRONG_INPUT"<<endl;
        }
        else{
            cout<<score<<endl;
        }
    }
}