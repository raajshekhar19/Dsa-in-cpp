


#include <bits/stdc++.h>
using namespace std;

long double minimiseMaxDistance(vector<int>&arr, int k){
    //k is the number of gas stations
    int n = arr.size();
    vector<int> howMany(n-1,0);//array for strong the gas stations bw two pre
    //placed stations
    priority_queue<pair<long double,int>> pq;

    //insert the diffreces etween the station along with the index
    for(int i =0;i<n-1;i++){
        pq.push({arr[i+1]-arr[i],i});
    }

    //pick each gas station
    //find the two station which has the max gap between them
    //place the gas station
    for(int gasStations = 1;gasStations<=k;gasStations++){
        auto it = pq.top();//finds the max
        pq.pop();
        int stationindex =it.second;//this takes the index of the max sep 

        //at that index the station is inserted
        howMany[stationindex]++;
        long double inidiff = arr[stationindex+1] -arr[stationindex];
        long double newsectionlen = inidiff/(long double)(howMany[stationindex]+1);
        pq.push({newsectionlen,stationindex});
    }
    return pq.top().first;

}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 4;
    long double ans = minimiseMaxDistance(arr, k);
    cout << "The answer is: " << ans << "\n";
    return 0;
}

