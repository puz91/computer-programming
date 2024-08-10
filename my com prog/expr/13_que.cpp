#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    double a,b,c;
    double x1,x2;
    cin>>a>>b>>c;
    x1=((-b)-(sqrt(b*b-4*a*c)))/(2*a);
    x2=((-b)+(sqrt(b*b-4*a*c)))/(2*a);
    cout<<round(x1*1e3)/1e3<<" "<<round(x2*1e3)/1e3;
    return 0;
}