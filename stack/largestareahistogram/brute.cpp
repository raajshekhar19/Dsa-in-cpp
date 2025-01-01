#include<bits/stdc++.h>
using namespace std;
int largestareahisst(vector<int> heights){
    int n = heights.size();
    vector<int>ans;
    for(int i = 0;i<n;i++){
        int counter = 1;
        //left
        int j = i-1; 
        while (j>=0){
            if(heights[j]>=heights[i]){
                counter++;
            }
            else{
                break;
            }
            j++;
        }
        
        int k = i+1;
        //right
        while(k<=n-1){
            if(heights[k]>=heights[i]){
                counter++;
            }
            else{
                break;
            }
            k++;
        }

        //area
        int area = heights[i]*counter;
        ans.push_back(area);
    }
    return *max_element(ans.begin(),ans.end());
}