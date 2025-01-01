#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n;
        cin >> k;
        vector<pair<int, int>> bottles;
        for (int i = 0; i < k; ++i){
            int first, second;
            cin >> first >> second;                      // Input for the pair
            bottles.push_back(make_pair(first, second)); // Push the pair into the vector
        }
        // Sorting based on the second element of each pair
        sort(bottles.begin(), bottles.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second > b.second; // Sort in decending order by second element
        });
        int res=0;
        int size = min(n,(int)bottles.size());
        for(int i =0 ;i<size;i++){
                res = res + bottles[i].second;
        }
        cout<<res<<endl;

    }
}