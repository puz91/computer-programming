#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    float x;
    cin>>x;
    if(x<1000){
        cout<<x;
    }
    else if(x<10000){
        cout<<round((x/1000)*10)/10.0<<"K";
    }
    else if(x<1000000){
        cout<<round(x/1000)<<"K";
    }
    else if(x<10000000){
        cout<<round((x/1000000)*10)/10.0<<"M";
    }
    else if(x<1000000000){
        cout<<round(x/1000000)<<"M";
    }
    else if(x<10000000000){
        cout<<round((x/1000000000)*10)/10.0<<"B";
    }
    else{
        cout<<round(x/1000000000)<<"B";
    }
    return 0;
}
