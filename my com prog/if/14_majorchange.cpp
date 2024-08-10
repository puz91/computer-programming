#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    string nx,ny,max;
    float gpax,gpay;
    char comx,comy,cal1x,cal1y,cal2x,cal2y;
    cin>>nx>>gpax>>comx>>cal1x>>cal2x>>ny>>gpay>>comy>>cal1y>>cal2y;
    if(comx=='A'&&comy=='A'&&cal1x<='C'&&cal2x<='C'&&cal1y<='C'&&cal2y<='C'){
        if(gpax>gpay){
            max=nx;
        }
        else if(gpax<gpay){
            max=ny;
        }
        else if(gpax==gpay){
            if(cal1x<cal1y){
                max=nx;
            }
            else if(cal1x>cal1y){
                max=ny;
            }
            else if(cal1x==cal1y){
                if(cal2x<cal2y){
                max=nx;
            }
            else if(cal2x>cal2y){
                max=ny;
            }
            else if(cal2x==cal2y){
                cout<<"Both";
                return 0;
            }
            }
        }
    }
    else{
        cout<<"None";
        return 0;
    }
    cout<<max;
}