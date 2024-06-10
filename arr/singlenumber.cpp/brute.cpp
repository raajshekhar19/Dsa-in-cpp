#include<bits/stdc++.h>
using namespace std;



int main(){
    vector<int> arr ={-1};
    int n = arr.size();
    for(int i = 0 ;i <n;i++){
        int num =arr[i];
        int counter =0;
        for(int j = 0; j<n;j++){
            if(arr[j]==num ){
                counter++;
            }
        }
        if(counter==1){
            cout<<num<<endl;
        }

    }


}