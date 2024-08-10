#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    int year,y;
    cin>>year;
    y=(year-543)%100;
    cout<<(y+y/4+11)%7;
}