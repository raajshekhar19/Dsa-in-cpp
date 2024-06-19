
#include <bits/stdc++.h>
using namespace std;

//time complex - > NlogN + O(max - min)*O(N)
//spaxe comlpex -> O(1)

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
    int lim = stalls[n-1] - stalls[0];
    for(int i  = 1 ;i<=lim ;i++){
        if(canWePlace(stalls, i ,k)){
            continue;
        }
        else{
            return i-1;
        }
    }
}

int main()
{
    vector<int> stalls = {0, 3, 4, 7, 10, 9};
    int k = 4;
    int ans = aggressiveCows(stalls, k);
    cout << "The maximum possible minimum distance is: " << ans << "\n";
    return 0;
}

