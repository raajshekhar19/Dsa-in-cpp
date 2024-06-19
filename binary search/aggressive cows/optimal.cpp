


#include <bits/stdc++.h>
using namespace std;

bool canWePlace(vector<int> &stalls, int dist, int cows) {
    int n = stalls.size(); //size of array
    int noofcow =1;
    int prevcdow = stalls[0];
    for(int i =1;i<n;i++){
        if(stalls[i]-prevcdow >= dist){
            noofcow++;
            prevcdow= stalls[i];
        }
        if(noofcow>=cows){
            return true;
        }
    }
    return false;
}
int aggressiveCows(vector<int> &stalls, int k) {
    int n = stalls.size(); //size of array
    //sort the stalls[]:
    sort(stalls.begin(),stalls.end());
    int low = stalls[0];
    int high = stalls[n-1];
    int ans = -1;
    while(low<=high){
        int mid = low +(high - low)/2;
        if(canWePlace(stalls,mid,k)){
            ans = mid;
            low = mid +1;
        }
        else{
            high = mid -1;
        }
    }
    return ans;
}

int main()
{
    vector<int> stalls = {0, 3, 4, 7, 10, 9};
    int k = 4;
    int ans = aggressiveCows(stalls, k);
    cout << "The maximum possible minimum distance is: " << ans << "\n";
    return 0;
}
