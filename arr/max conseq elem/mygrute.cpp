#include<bits/stdc++.h>
using namespace std;

//time complex - > O(n+n)
//space ->O(n)

int main(){
    vector<int> arr ={1,1,0,1,1,1,0,1,1};
    vector<int> hsh={0};
    int i = 0 ;
    int k =0;
    while(i<arr.size()){
        if(arr[i]==1){
                k++;
        }
        else{
            hsh.push_back(k);
            k =0;
        }
        i++;
    }
    int lar = hsh[0];
    for(int i = 0 ;i<hsh.size();i++){
        if(hsh[i]>lar){
            lar=hsh[i];
        }
    }
    cout<<lar;
   
}