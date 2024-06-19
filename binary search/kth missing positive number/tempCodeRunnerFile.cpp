int counter=0;
    for(int i =1;i<=m;i++){
        if(hsh[i]==0){
            counter++;
        }
        if(counter==k){
             cout<<i;
             break;
        }
    }