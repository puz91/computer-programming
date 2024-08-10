#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    string num;
    cin>>num;
    if(num.length()==10){
        if(num[0]=='0'){
            if(num[1]=='6'||num[1]=='8'||num[1]=='9'){
                cout<<"Mobile number";
            }
            else{
                cout<<"Not a mobile number";
            }
        }
        else{
            cout<<"Not a mobile number";
        }
    }
    else{
        cout<<"Not a mobile number";
    }
}