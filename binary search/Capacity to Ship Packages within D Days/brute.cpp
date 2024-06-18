#include<bits/stdc++.h>
using namespace std;

int findDays(vector<int> &weights, int ok){
    int days = 1; //First day.
    int load = 0;
    int n = weights.size(); //size of array.
    for (int i = 0; i < n; i++) {
        if (load + weights[i] > ok) {
            days += 1; //move to next day
            load = weights[i]; //load the weight.
        }
        else {
            //load the weight on the same day.
            load += weights[i];
        }
    }
    return days;
}



int leastWeightCapacity(vector<int> &weights, int d){
    int n = weights.size();
    int maxi = *max_element(weights.begin(),weights.end());
    int sum =0;
    for(int i =0;i<n;i++){
        sum +=weights[i];
    }
    for(int i = maxi;i<=sum;i++){
        if (findDays(weights, i) <= d) {
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int> weights = {5, 4, 5, 2, 3, 4, 5, 6};
    int d = 5;
    int ans = leastWeightCapacity(weights, d);
    cout << "The minimum capacity should be: " << ans << "\n";
    return 0;
}