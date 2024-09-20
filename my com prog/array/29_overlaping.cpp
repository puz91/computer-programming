#include<iostream>
using namespace std;
int main(){
    int n;
    int k;
    int max;
    cin>>n;
    k=n*(n-1)/2;
    int c=0;
    int x1[n],y1[n],x2[n],y2[n],a[k],b[k],d[k],temp;
    for(int i=0; i<n; i++){
        cin>>x1[i]>>y1[i]>>x2[i]>>y2[i];
    }
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(x1[i]>=x1[j]&&x1[i]<=x2[j]&&y1[i]>=y1[j]&&y1[i]<=y2[j]){
                a[c]=i;
                b[c]=j;
                c++;
                //cout<<'a';
            }
            else if(x2[i]>=x1[j]&&x2[i]<=x2[j]&&y2[i]>=y1[j]&&y2[i]<=y2[j]){
                a[c]=i;
                b[c]=j;
                c++;
                //cout<<'b';
            }
            else if(x1[i]>=x1[j]&&x1[i]<=x2[j]&&y2[i]>=y1[j]&&y2[i]<=y2[j]){
                a[c]=i;
                b[c]=j;
                c++;
                //cout<<'c';
            }
            else if(x2[i]>=x1[j]&&x2[i]<=x2[j]&&y1[i]>=y1[j]&&y1[i]<=y2[j]){
                a[c]=i;
                b[c]=j;
                c++;
                //cout<<'d';
            }
        }
    }

    //cout<<c<<endl;
    //if(c==0){cout<<"No overlaps";}
    for(int i=0; i<c; i++){
        if(x1[a[i]]>=x1[b[i]]&&y1[a[i]]>=y1[b[i]]&&x1[a[i]]<=x2[b[i]]&&y1[a[i]]<=y2[b[i]]){
            if(y1[a[i]]>y1[b[i]]&&y2[a[i]]<y2[b[i]]&&x1[a[i]]>x1[b[i]]&&x2[a[i]]<x2[b[i]]){
                d[i]=(y2[a[i]]-y1[a[i]])*(x2[a[i]]-x1[a[i]]);
            }
            else if(y1[a[i]]>y1[b[i]]&&y2[a[i]]<y2[b[i]]){d[i]=(y2[a[i]]-y1[a[i]])*(x2[b[i]]-x1[a[i]]);}
            else if(x1[a[i]]>x1[b[i]]&&x2[a[i]]<x2[b[i]]){d[i]=(y2[a[i]]-y1[b[i]])*(x2[a[i]]-x1[a[i]]);}
            else{d[i]=(y2[b[i]]-y1[a[i]])*(x2[b[i]]-x1[a[i]]);}
            //cout<<d[i];
        }
        else if(x2[a[i]]>=x1[b[i]]&&y2[a[i]]>=y1[b[i]]&&x2[a[i]]<=x2[b[i]]&&y2[a[i]]<=y2[b[i]]){
            if(y1[a[i]]>y1[b[i]]&&y2[a[i]]<y2[b[i]]&&x1[a[i]]>x1[b[i]]&&x2[a[i]]<x2[b[i]]){
                d[i]=(y2[a[i]]-y1[a[i]])*(x2[a[i]]-x1[a[i]]);
            }
            else if(y1[a[i]]>y1[b[i]]&&y2[a[i]]<y2[b[i]]){d[i]=(y2[a[i]]-y1[a[i]])*(x2[a[i]]-x1[b[i]]);}
            else if(x1[a[i]]>x1[b[i]]&&x2[a[i]]<x2[b[i]]){d[i]=(y2[a[i]]-y1[b[i]])*(x2[a[i]]-x1[a[i]]);}
            else{d[i]=(y2[a[i]]-y1[b[i]])*(x2[a[i]]-x1[b[i]]);}
        }
        else if(x1[a[i]]>=x1[b[i]]&&x1[a[i]]<=x2[b[i]]&&y2[a[i]]>=y1[b[i]]&&y2[a[i]]<=y2[b[i]]){
            if(y2[a[i]]>y2[b[i]]&&y1[a[i]]<y1[b[i]]&&x1[a[i]]>x1[b[i]]&&x2[a[i]]<x2[b[i]]){
                d[i]=(y2[b[i]]-y1[b[i]])*(x2[a[i]]-x1[a[i]]);
            }
            else if(y2[a[i]]>y2[b[i]]&&y1[a[i]]<y1[b[i]]){d[i]=(y2[b[i]]-y1[b[i]])*(x2[b[i]]-x1[a[i]]);}
            else if(x1[a[i]]>x1[b[i]]&&x2[a[i]]<x2[b[i]]){d[i]=(y2[b[i]]-y1[a[i]])*(x2[a[i]]-x1[a[i]]);}
            else{d[i]=(y2[a[i]]-y1[b[i]])*(x2[b[i]]-x1[a[i]]);}
        }
        else if(x2[a[i]]>=x1[b[i]]&&x2[a[i]]<=x2[b[i]]&&y1[a[i]]>=y1[b[i]]&&y1[a[i]]<=y2[b[i]]){
            if(y2[a[i]]>y2[b[i]]&&y1[a[i]]<y1[b[i]]&&x1[a[i]]>x1[b[i]]&&x2[a[i]]<x2[b[i]]){
                d[i]=(y2[b[i]]-y1[b[i]])*(x2[a[i]]-x1[a[i]]);
            }
            else if(y2[a[i]]>y2[b[i]]&&y1[a[i]]<y1[b[i]]){d[i]=(y2[b[i]]-y1[b[i]])*(x2[a[i]]-x1[b[i]]);}
            else if(x1[a[i]]>x1[b[i]]&&x2[a[i]]<x2[b[i]]){d[i]=(y2[b[i]]-y1[a[i]])*(x2[a[i]]-x1[a[i]]);}
            else{d[i]=(y2[b[i]]-y1[a[i]])*(x2[a[i]]-x1[b[i]]);}
        }
        //cout<<d[i]<<' ';
        //cout<<a[i]<<' '<<b[i]<<endl;
    }
    max=0;

    //test
    // for(int i=0; i<c; i++){
    //     cout<<a[i]<<' '<<b[i]<<' '<<d[i]<<endl;
    // }

    for(int i=0; i<c; i++){
        if(d[i]>max){
            max=d[i];
        }
        //cout<<a[i]<<' '<<b[i]<<' '<<d[i]<<endl;
    }
    if(max!=0){cout<<"Max overlapping area = "<<max<<endl;}
    else{cout<<"No overlaps"; return 0;}
    for(int i=0; i<c; i++){
        if(d[i]==max){
            cout<<"rectangles "<<a[i]<<" and "<<b[i]<<endl;
        }
        //cout<<a[i]<<' '<<b[i]<<' '<<d[i]<<endl;
    }

}