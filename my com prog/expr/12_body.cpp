#include<iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()

{
    double h,w;
    cin>>w;
    cin>>h;
    cout<<setprecision(15)<<sqrt(w * h)/60<<endl;
    cout<<setprecision(15)<<0.024265 * pow(w,0.5378) * pow(h,0.3964)<<endl;
    cout<<setprecision(15)<<0.0333 * pow(w,(0.6157-0.0188 * (log10(w)))) * pow(h,0.3);

}