#include<iostream>
using namespace std;
int main(){
    int x1,x2,x3,x4,rmax=-1000000,rmin=1000000,bmax=-1000000,bmin=1000000;
    while(true){
        cin>>x1;
        if(x1==-998){
            cout<<rmin<<" "<<bmax;
            break;
        }
        else if(x1==-999){
            cout<<bmin<<" "<<rmax;
            break;
        }
        else{
            if(x1>=rmax){
                rmax=x1;
            }
            if(x1<=rmin){
                rmin=x1;
            }
            cin>>x2;
            cin>>x3;
            if(x3==-998){
                if(x2>=bmax){
                bmax=x2;
                }
                if(x2<=bmin){
                bmin=x2;
                }
                cout<<rmin<<" "<<bmax;
                break;
            }
            else if(x3==-999){
                if(x2>=bmax){
                bmax=x2;
                }
                if(x2<=bmin){
                bmin=x2;
                }
                cout<<bmin<<" "<<rmax;
                break;
            }
            else{
                if(x2>=bmax){
                    bmax=x2;
                }
                if(x2<=bmin){
                    bmin=x2;
                }
                if(x3>=bmax){
                    bmax=x3;
                }
                if(x3<=bmin){
                    bmin=x3;
                }
                cin>>x4;
                if(x4>=rmax){
                    rmax=x4;
                }
                if(x4<=rmin){
                    rmin=x4;
                }
            }
        }
    }
}
