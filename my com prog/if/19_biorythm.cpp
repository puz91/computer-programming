#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

int main()

{
    //int d1=14,m1=4,y1=2497,d2=4,m2=10,y2=2564;
    int d1,m1,y1,d2,m2,y2;
    float n=0,m=0,b=0,s=0,s1=0,s2=0,s3=0;
    //int d1=20,m1=11,y1=2540,d2=10,m2=2,y2=2544;
    cin>>d1>>m1>>y1>>d2>>m2>>y2;
    y1=y1-543;
    y2=y2-543;
    for(int i=12;i>=m1;i--){
        if(i==4||i==6||i==9||i==11){
            n=n+30;
        }
        else if(i==2){
            if(y1%400==0){
                n=n+29;
            }
            if(y1%4==0&&y1%100!=0){
                n=n+29;
                
            }
            else{
                n=n+28;
            }
        }
        else{
            n=n+31;
        }
    }
    for(int i=1;i<m2;i++){
        if(i==4||i==6||i==9||i==11){
            m=m+30;
        }
        else if(i==2){
            if(y2%400==0){
                m=m+29;
            }
            if(y2%4==0&&y2%100!=0){
                m=m+29;
            }
            else{
                m=m+28;
            }
        }
        else{
            m=m+31;
        }
    }
    n=n-d1+1;
    m=m+d2-1;
    b=365*(y2-y1-1);
    //cout<<n<<" "<<m<<" "<<b<<endl;
    s=n+m+b;
    s1=sin(2*M_PI*s/23);
    s2=sin(2*M_PI*s/28);
    s3=sin(2*M_PI*s/33);
    cout<<s<<" "<<round(s1*100.0)/100.0<<" "<<round(s2*100.0)/100.0<<" "<<round(s3*100.0)/100.0;
    
}