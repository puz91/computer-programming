#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

int main()

{
    string nx,ny,max;
    float gpax,gpay;
    char comx,comy,cal1x,cal1y,cal2x,cal2y;
    cin>>nx>>gpax>>comx>>cal1x>>cal2x>>ny>>gpay>>comy>>cal1y>>cal2y;
    if(comx!='A' || cal1x>'C' || cal2x>'C'){
        nx="0";
    }
    if(comy!='A' || cal1y>'C' || cal2y>'C'){
        ny="0";
    }
    else{
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
    //cout<<nx<<" "<<ny<<" ";
    if(nx=="0"&&ny=="0"){
        cout<<"None";
        return 0;
    }
    else if(nx=="0"){
        cout<<ny;
        return 0;
    }
    else if(ny=="0"){
        cout<<nx;
        return 0;
    }
    cout<<max;
}
