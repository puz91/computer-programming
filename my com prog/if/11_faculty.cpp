#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

int main()

{
    string f;
    cin>>f;
    if(f=="01"||f=="02"||f=="20"||f=="21"||f=="22"||f=="23"||f=="24"||f=="25"||f=="26"||f=="27"||f=="28"||f=="29"||f=="30"||f=="31"||f=="32"||f=="33"||f=="34"||f=="35"||f=="36"||f=="37"||f=="38"||f=="39"||f=="40"||f=="51"||f=="53"||f=="55"||f=="58"){
        cout<<"OK";
    }
    else{
        cout<<"Error";
    }
    return 0;
}