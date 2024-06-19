


#include <bits/stdc++.h>
using namespace std;

int missingK(vector < int > vec, int n, int k) {
    int low = 1;
    int high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        int missing =vec[mid]-mid+1 ;
        if(missing<k){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    /* 
    ans = arr[high] + more
        = arr[high] +( k - missing);
        = arr[high] + k - missing;
        = arr[high] + k - arr[high] + high + 1;
        = k + high + 1;
        = k + low;
     */
    return k +low;
}


int main()
{
    vector<int> vec = {4, 7, 9, 10};
    int n = 4, k = 4;
    int ans = missingK(vec, n, k);
    cout << "The missing number is: " << ans << "\n";
    return 0;
}

