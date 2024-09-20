min=sum[0];
        for(int j=0; j<n; j++){
            if(sum[j]<min){min=sum[j];}
        }
        for(int j=0; j<n; j++){
            if(sum[j]==min){cout<<">> "<<num[j]<<endl; break;}
        }