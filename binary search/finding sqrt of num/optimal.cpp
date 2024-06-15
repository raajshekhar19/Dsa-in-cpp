


#include <bits/stdc++.h>
using namespace std;

int floorSqrt(int n) {
    int ans = 0;
    //linear search on the answer space:
    int low = 1;
    int high = n;
    while(low<=high){
        int mid = low +(high - low)/2;
        int val = mid *mid;
        if(val<=n){
            low = mid +1;
        }else{
           high = mid-1;
        }
    }
    return high;
}

int main()
{
    int n = 28;
    int ans = floorSqrt(n);
    cout << "The floor of square root of " << n
         << " is: " << ans << "\n";
    return 0;
}

