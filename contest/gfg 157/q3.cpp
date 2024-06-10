 
   /*  bool finder(vector<int> &arr){
        int ok=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=0){
                return false;
            }
        }
        return true;
    }
    int large(vector<int> &arr){
        int largest =arr[0];
        int idx =0;
        for(int i =1;i<arr.size();i++){
            if(largest<arr[i]){
                largest =arr[i];
                idx =i;
            }
        }
        return idx;
    }
    
    
    int minimumOperations(int n, vector<int> &arr, int p, int q) {
        // code here
        //find if all elements zero
        int counter=0;
        while(!finder(arr)){
        //counter
        //largest se p mins
        int id = large(arr);
        for(int i =0;i<arr.size();i++){
            if(i==id){
                arr[i]=arr[i]-p;
                if(arr[i]<0){
                    arr[i]=0;
                }
            }
            else{
                arr[i]=arr[i]-q;
                if(arr[i]<0){
                    arr[i]=0;
                }
            }
        }
        counter++;
        //rest se q
        //find if all elements zero
        //repeat
            
        }
        
    return counter;
        
    } */