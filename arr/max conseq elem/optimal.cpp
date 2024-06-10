#include<bits/stdc++.h>
using namespace std;

//time complex -> O(n)
//space complexity -> O(1)

int main(){
    vector<int> arr ={1,1,0,1,1,1,0,1,1};
    vector<int> hsh={0};
    int i = 0 ;
    int k =0;
    int lar = 0;
    while(i<arr.size()){
        if(arr[i]==1){
                k++;
        }
        else{
            if(k>lar){
                lar = k;
            }
            k =0;
        }
        i++;
    }
    
    cout<<lar;
   
}