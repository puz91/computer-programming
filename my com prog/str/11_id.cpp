#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

int main()

{
    string id;
    int n12,x;
    cin>>id;
    cout<<id[0]<<"-"<<id[1]<<id[2]<<id[3]<<id[4]<<"-"<<id[5]<<id[6]<<id[7]<<id[8]<<id[9]<<"-"<<id[10]<<id[11]<<"-";
    for(int i=0;i<12;i++){
        x=id[i]-'0';
        id[i]=x;
    }
    n12=(11-(13*id[0]+12*id[1]+11*id[2]+10*id[3]+9*id[4]+8*id[5]+7*id[6]+6*id[7]+5*id[8]+4*id[9]+3*id[10]+2*id[11])%11)%10;
    cout<<n12;

}