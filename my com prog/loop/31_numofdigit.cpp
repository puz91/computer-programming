#include<iostream>
#include<string>
#include<cmath>
using namespace std;
long long pow_digit(long long a,long long b){
    long long ans=1;
    for(int i=0; i<b; i++){
        ans*=a;
    }
    return ans;

}

int main(){
    string m,n;
    long long im,in,k=0,f=0,md=0,l=0,i=0;
    cin>>m>>n;
    im=stoll(m);
    in=stoll(n);
    if(m.length()==n.length()){
        k=((in-im)+1)*(m.length());
    }
    else{
        f=(pow_digit(10,m.length())-im)*m.length();
        l=(in-pow_digit(10,n.length()-1)+1)*n.length();
        i=n.length()-m.length();
        for(int j=1; j<i; j++){
            md+=((pow_digit(10,n.length()-j-1))*9)*(n.length()-j);
            //cout<<((pow_digit(10,n.length()-j-1))*9)*(n.length()-j)<<' '<<j<<endl;
        }
        k=f+l+md;
    }
    cout<<k;
    //cout<<f<<' '<<l<<endl;
    //cout<<md<<' '<<k;

}