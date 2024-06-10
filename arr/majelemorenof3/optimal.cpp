#include<bits/stdc++.h>
using namespace std;

void majelem(vector<int> &arr, int n){
    //sing the majority elements is greter than than n/3 
    //thus there are only two number posiible as they will 
    //compirise of half of the arr

    int co1 =0;
    int co2 =0;
    int ele1 =INT_MIN;
    int ele2 =INT_MIN;
    vector<int> ans;
    for(int i =0;i<n;i++){
        //initilizing elements
        if(co1==0 && arr[i]!=ele2){
            co1++;
            ele1 = arr[i];
        }
        else if(co2 ==0 && arr[i]!=ele1 ){
            co2++;
            ele2=arr[i];
        }

        //counting them
        else if(arr[i]==ele1){
            co1++;
        }
        else if(arr[i]==ele2){
            co2++;
        }

        //if found other element the substract th ecounters
        else{
            co1--;
            co2--;
        }
    }
    co1=0;
    co2 =0;
    for(int i =0;i<n;i++){
        if(arr[i]==ele1)co1++;
        if(arr[i]==ele2)co2++;
    }
    int mini = int(n/3)+1;
    if(co1>=mini)ans.push_back(ele1);
    if(co2>=mini)ans.push_back(ele2);
}



int main(){
    vector<int> arr = {1,2,1};
    int n = arr.size();
    majelem(arr,n);
}