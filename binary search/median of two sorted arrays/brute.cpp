#include<bits/stdc++.h>
using namespace std;


int median(vector<int>&a,vector<int> &b){
    int n = a.size();
    int m = b.size();
    vector<int> ans;
    int left = 0;
    int right = 0;
    while(left<n && right<m){
        if(a[left]<b[right]){
            ans.push_back(a[left]);
            left++;
        }
        else{
            ans.push_back(b[right]);
            right++;
        }
    }
    while(left<n){
        ans.push_back(a[left]);
        left++;
    }
    while(right<m){
        ans.push_back(b[right]);
        right++;
    }


    if(ans.size()%2==1){
        int i = ans.size()/2;
        return ans[i];
    }
    else{
        int i = ans.size()/2;
        int j = ans.size()/2 -1;
        return (ans[i]+ans[j])/2; 
    }
}

int main()
{
    vector<int> a = {1, 4, 7, 10, 12};
    vector<int> b = {2, 3, 6, 15};
    cout << "The median of two sorted array is "<< median(a, b) << '\n';
}