#include<iostream>
#include<algorithm>
using namespace std;
bool csort(int a[],int n){
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            return false;
        }
    }
    return true;
}
int main(){
    int n,m,temp,h=0,k,b,j,n2,c=1;
    cin>>n;
    n2=n;
    b=n-1;
    int a[n],s[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    while(!csort(a,n)){
        m=a[0];
        for(int i=1;i<n2;i++){
            if(a[i]>m){
                m=a[i];
                j=i;
            }
        }
        if(a[0]==m){
            for(int i=0;i<n2/2;i++){
                //cout<<i<<" "<<b<<endl;
                temp=a[i];
                a[i]=a[b];
                a[b]=temp;
                b--;
            }
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
            n2--;
            b=n2-1;
            c++;
        }
        else if(a[n-c]==m){
            n2--;
            b=n2-1;
            c++;
            //cout<<c<<endl;
        }
        else{
            //cout<<n2<<endl;
            for(int i=1;i<n2;i++){
                if(a[i]==m){
                    temp=a[i];
                    a[i]=a[0];
                    a[0]=temp;
                    //cout<<i<<endl;
                }
            //cout<<j<<endl;
                if(i<j){
                    temp=a[i];
                    a[i]=a[j-1];
                    a[j-1]=temp;
                    j--;
                }
            }
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
            for(int i=0;i<n2/2;i++){
                //cout<<i<<" "<<b<<endl;
                temp=a[i];
                a[i]=a[b];
                a[b]=temp;
                b--;
            }
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
            n2--;
            b=n2-1;
            c++;
        }
        //cout<<c<<endl;
    }
}