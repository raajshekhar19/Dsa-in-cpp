#include<bits/stdc++.h>
using namespace std;

void mergeoverlapp(vector<vector<int>> &arr,int n,int m){
    vector<vector<int>> ans;
    //sort the arr
    //use a pointer
    //iterate
    //start  is the first of the arr and end is the last
    //iteate again and check if the first element of second
    //is greater than that of the second of the first one
    //if true then find their max end 
    for(int i =0;i<n;i++){
        int start = arr[i][0];
        int end = arr[i][1];

        //skips all the merged intervals
         if(!ans.empty() && end<=ans.back()[1]){
            continue;
         }

        for(int j = i+1;j<n;j++){
            if(arr[j][0]<=end){
                end = max(end,arr[j][1]);
            }
            else{
                break;
            }
        }
        ans.push_back({start,end});
    }
}
//time complexity -> O( nlogn)+O(2n)
//space complexity ->O(n)


int main(){
    vector<vector<int>> arr ={{1,2},{2,6},{8,9}};
    int n = arr.size();
    int m = arr[0].size();
    mergeoverlapp(arr,n,m);
}