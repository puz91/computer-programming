#include<iostream>
#include<vector>
#include<sstream>
using namespace std;

string upgrade(string g){
    string a[10]={"A","B+","B","C+","C","D+","D","F"};
    for(int i=0; i<8; i++){
        if(g=="A"){
            return "A";
        }
        if(g==a[i]){
            return a[i-1];
        }
    }
    return "????";

}

int main(){
    string d;
    string g;
    string c;
    vector<string> id;
    vector<string> grade;
    while(cin>>d){
        if(d=="q"){
            break;
        }
        else{
            id.push_back(d);
            cin>>g;
            grade.push_back(g);
        }
    }

    cin.ignore();
    getline(cin,c);
    stringstream ss(c);
    vector<string> z;
    string y;
    while(ss>>y){
        z.push_back(y);
    }
    int k=0;
    for(int i=0; i<id.size(); i++){
        for(int j=0; j<z.size(); j++){
            if(id[i]==z[j]){
                grade[i] =  upgrade(grade[i]);
                //cout << grade[i] << "ff" << " ";
            }
        }
        
        //cout<<id[i]<<' '<<grade[i]<<endl;
    }
    for(int i=0; i<id.size(); i++){
        cout<<id[i]<<' '<<grade[i]<<endl;
    }

}