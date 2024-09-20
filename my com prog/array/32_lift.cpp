#include<iostream>
using namespace std;
int main(){
    int n,m,min,c,minp;
    cin>>n;
    int num[n],current[n],end[n],sum[n],pos[n];
    for(int i=0; i<n; i++){
        cin>>num[i]>>current[i]>>end[i];
    }
    cin>>m;
    int stay[m],willgo[m];
    for(int i=0; i<m; i++){
        cin>>stay[i]>>willgo[i];
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            //people down
            if(stay[i]>=willgo[i]){
                //lift down
                if(current[j]>=end[j]){
                    if(stay[i]>=end[j]&&stay[i]<=current[j]&&willgo[i]>=end[j]&&willgo[i]<=current[j]){sum[j]=0;}
                    else if(stay[i]>=end[j]&&stay[i]<=current[j]){sum[j]=end[j]-willgo[i];}
                    else if(end[j]>stay[i]){sum[j]=(end[j]-stay[i])+(stay[i]-willgo[i]);}
                    else{sum[j]=(stay[i]-end[j])+(stay[i]-willgo[i]);}
                }
                //lift up
                else{
                    if(stay[i]>=current[j]&&stay[i]<=end[j]){sum[j]=end[j]-willgo[i];}
                    else if(stay[i]>end[j]){sum[j]=(stay[i]-end[j])+(stay[i]-willgo[i]);}
                    else{sum[j]=(end[j]-stay[i])+(stay[i]-willgo[i]);}
                }

            }
            //people up
            else if(willgo[i]>=stay[i]){
                //lift down
                if(current[j]>=end[j]){
                    if(end[j]>=stay[i]){sum[j]=(end[j]-stay[i])+(willgo[i]-stay[i]);}
                    else{sum[j]=(stay[i]-end[j])+(willgo[i]-stay[i]);}
                }
                //lift up
                else{
                    if(stay[i]<current[j]){sum[j]=(end[j]-stay[i])+(willgo[i]-stay[i]);}
                    else if(end[j]>willgo[i]){sum[j]=end[j]-willgo[i];}
                    else{sum[j]=willgo[i]-end[j];}
                }

            }
        }
        min=sum[0];
        c=0;
        for(int j=0; j<n; j++){
            if(sum[j]<min){min=sum[j];}
        }
        for(int j=0; j<n; j++){
            if(sum[j]==min){pos[c]=num[j]; c++;}
        }
        if(c>1){
            minp=pos[0];
            for(int j=0; j<c; j++){
                if(pos[j]<minp){minp=pos[j];}
            }
            cout<<">> "<<minp<<endl;
        }
        else{
            for(int j=0; j<n; j++){
                if(sum[j]==min){cout<<">> "<<num[j]<<endl; break;}
            }
        }
        //test
        // for(int j=0; j<n; j++){
        //     cout<<sum[j]<<' ';
        // }
        // cout<<endl;
    }


}