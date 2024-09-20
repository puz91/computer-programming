#include<iostream>
using namespace std;
int main(){
    long long n;
    //use c for check
    int c=0,u=0,k=0,p=0;
    int num1[20]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
    int num2[8]={20,30,40,50,60,70,80,90};
    long long num3[5]={100,1000,1000000,1000000000,1000000000000};
    string read[20]={"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    string ten[8]={"twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    string pri[5]={"hundred","thousand","million","billion","trillion"};
    cin>>n;
    //unit
    for(int i=0;i<20;i++){
        if(n==num1[i]){cout<<read[i];}
        else{c=1;}
    }

    //ten
    if(c==1){
        if(n<100){
            k=(n)%10;
            u=(n)-k;
            for(int i=0; i<8; i++){
                if(u==num2[i]){cout<<ten[i]<<' '<<read[k];}
            }
        }
        else{c=2,u=0,k=0;}
    }

    //more than 99
    if(c==2){
        //tillion
        if((n)>=num3[4]){
            //before billion
            u=n/num3[4];
            if(u<20){
                for(int i=1; i<20; i++){
                    if(u==num1[i]){cout<<read[i]<<' ';}
                }
            }
            //>19
            if(u>19&&u<100){
                p=u%10;
                k=u-p;
                for(int i=0; i<8; i++){
                    if(k==num2[i]){cout<<ten[i]<<' ';}
                }
                for(int i=1; i<10; i++){
                    if(p==num1[i]){cout<<read[i]<<' ';}
                }
            }
            //>99
            if(u>99){
                k=u/100;
                for(int i=1;i<10;i++){
                    if(k==num1[i]){cout<<read[i]<<' '<<pri[0]<<' ';}
                }
                u=u%100;
                k=u%10;
                p=u-k;
                //cout<<u<<' '<<k<<' '<<p;
                if(u<20){
                    for(int i=1; i<20; i++){
                        if(u==num1[i]){cout<<read[i]<<' ';}
                    }
                }
                else{
                    for(int i=0; i<8; i++){
                        if(p==num2[i]){cout<<ten[i]<<' ';}
                    }
                    for(int i=1; i<10; i++){
                        if(k==num1[i]){cout<<read[i]<<' ';}
                    }

                }
            }

            //tillion
            n=(n)%num3[4];
            cout<<pri[4]<<' ';
        }

        //billion
        if((n)>=num3[3]){
            //before billion
            u=n/num3[3];
            if(u<20){
                for(int i=1; i<20; i++){
                    if(u==num1[i]){cout<<read[i]<<' ';}
                }
            }
            //>19
            if(u>19&&u<100){
                p=u%10;
                k=u-p;
                for(int i=0; i<8; i++){
                    if(k==num2[i]){cout<<ten[i]<<' ';}
                }
                for(int i=1; i<10; i++){
                    if(p==num1[i]){cout<<read[i]<<' ';}
                }
            }
            //>99
            if(u>99){
                k=u/100;
                for(int i=1;i<10;i++){
                    if(k==num1[i]){cout<<read[i]<<' '<<pri[0]<<' ';}
                }
                u=u%100;
                k=u%10;
                p=u-k;
                //cout<<u<<' '<<k<<' '<<p;
                if(u<20){
                    for(int i=1; i<20; i++){
                        if(u==num1[i]){cout<<read[i]<<' ';}
                    }
                }
                else{
                    for(int i=0; i<8; i++){
                        if(p==num2[i]){cout<<ten[i]<<' ';}
                    }
                    for(int i=1; i<10; i++){
                        if(k==num1[i]){cout<<read[i]<<' ';}
                    }

                }
            }

            //billion
            n=n%num3[3];
            cout<<pri[3]<<' ';

        }

        //million
        if(n>=num3[2]){
            //before million
            u=n/num3[2];
            if(u<20){
                for(int i=1; i<20; i++){
                    if(u==num1[i]){cout<<read[i]<<' ';}
                }
            }
            //>19
            if(u>19&&u<100){
                p=u%10;
                k=u-p;
                for(int i=0; i<8; i++){
                    if(k==num2[i]){cout<<ten[i]<<' ';}
                }
                for(int i=1; i<10; i++){
                    if(p==num1[i]){cout<<read[i]<<' ';}
                }
            }
            //>99
            if(u>99){
                k=u/100;
                for(int i=1;i<10;i++){
                    if(k==num1[i]){cout<<read[i]<<' '<<pri[0]<<' ';}
                }
                u=u%100;
                k=u%10;
                p=u-k;
                //cout<<u<<' '<<k<<' '<<p;
                if(u<20){
                    for(int i=1; i<20; i++){
                        if(u==num1[i]){cout<<read[i]<<' ';}
                    }
                }
                else{
                    for(int i=0; i<8; i++){
                        if(p==num2[i]){cout<<ten[i]<<' ';}
                    }
                    for(int i=1; i<10; i++){
                        if(k==num1[i]){cout<<read[i]<<' ';}
                    }

                }
            }

            //million
            (n)=(n)%num3[2];
            cout<<pri[2]<<' ';
        }

        //thousand
        if((n)>=num3[1]){
            //before 1000
            u=(n)/num3[1];
            if(u>99){
                k=u/100;
                for(int i=1;i<10;i++){
                    if(k==num1[i]){cout<<read[i]<<' '<<pri[0]<<' ';}
                }
                if((n)<100000){
                    k=u%100;
                    p=k/10;
                    u=k-p;
                    //cout<<p<<' '<<k;
                    for(int i=0;i<8;i++){
                        if(u==num2[i]){cout<<ten[i]<<' ';}
                    }
                    for(int i=1;i<20;i++){
                        if(p==num1[i]){cout<<read[i]<<' ';}
                    }
                }
                else{
                    p=u%100;
                    k=p%10;
                    p=p-k;
                    u=u%100;
                    //cout<<k<<' '<<p<<' '<<u;
                    if(u<20){
                        for(int i=1; i<20; i++){
                            if(u==num1[i]){cout<<read[i]<<' ';}
                        }
                    }
                    
                    else{
                        for(int i=0; i<8; i++){
                            if(num2[i]==p){cout<<ten[i]<<' ';}
                        }
                        for(int i=1; i<10; i++){
                            if(num1[i]==k){cout<<read[i]<<' ';}
                        }
                    }
                }
                
            }
            else if(u>19){
                k=u%10;
                p=u-k;
                for(int i=0;i<8;i++){
                    if(p==num2[i]){
                        cout<<ten[i]<<' ';
                    }
                }
                for(int i=1;i<20;i++){
                    if(k==num1[i]){
                        cout<<read[i]<<' ';
                    }
                }
            }
            else{
                for(int i=1; i<20; i++){
                    if(num1[i]==u){
                        cout<<read[i]<<' ';
                    }
                }
            }
            

            //1000
            cout<<pri[1]<<' ';
            (n)=(n)%num3[1];
            
            
        }

        //hundred
        if((n)>=num3[0]){
            u=(n)/num3[0];
            for(int i=1;i<10;i++){
                if(num1[i]==u){
                    cout<<read[i]<<' ';
                }
            }
            cout<<pri[0]<<' ';
            p=(n)%num3[0];
            if(p<100){
                k=p%10;
                u=p-k;
                for(int i=0; i<8; i++){
                    if(u==num2[i]){c=3; cout<<ten[i]<<' '<<read[k];}
                }
                if(c!=3){
                    for(int i=1;i<10;i++){
                        if(num1[i]==k){
                            cout<<read[i];
                        }
                    }
                }
            }
        }

        if((n)>0&&n<100){
            //unit
            for(int i=1;i<20;i++){
                if(n==num1[i]){c=1; cout<<read[i];}
            }
            //ten
            if(c!=1){
                k=(n)%10;
                u=(n)-k;
                for(int i=0; i<8; i++){
                    if(u==num2[i]){cout<<ten[i]<<' ';}
                }
                if(k>0){
                    cout<<read[k];
                }
            }
        }

    }

}