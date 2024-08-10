#include<iostream>
#include <cmath>
#include <iomanip>

using namespace std;
long gcd(long a, long b) {
 if (b == 0) return a;
 return gcd(b, a%b);
}
int main()

{
    string a,b,c;
    long long x,y,z=0;
    //a="0",b="02",c="27";
    cin>>a>>b>>c;
    x=stoi(a)*pow(10,b.length()+c.length())+stoi(b)*pow(10,c.length())+stoi(c);
    y=stoi(a)*pow(10,b.length())+stoi(b);
    //cout<<x<<" "<<y<<" ";
    for(int i=b.length(); i<c.length()+b.length(); i++){
        z=z+9*pow(10,i);
    }
    int G=gcd(x-y,z);
    cout<<(x-y)/G<<" / "<<z/G;
    return 0;
}