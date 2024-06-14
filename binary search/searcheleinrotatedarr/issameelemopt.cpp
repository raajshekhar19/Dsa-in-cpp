#include<bits/stdc++.h>
using namespace std;

bool search(vector<int> &arr, int n , int k){
         int low =0 ;
         int high  =  n-1;
         while(low<=high){
            int mid = low +(high -low)/2;
            if(arr[mid]==k) return true;
            if(arr[low]==arr[mid] && arr[mid]<=arr[high]){
                low++;
                high--;
                continue;
            }

            //check sorted
            if(arr[low]<=arr[mid]){
                if(arr[low]<=k && k<=arr[mid]){
                        high = mid-1;
                }
                else{
                    low = mid+1;
                }
            }
            else{
                if(arr[mid]<=k && k<=arr[high]){
                    low = mid+1;
                }
                else{
                    high = mid -1;
                }
            }
         }
return false;
}


int main()
{
    vector<int> arr = {2,5,6,0,0,1,2};
    int n = 9, k = 0;
    int ans = search(arr, n, k);
    if (ans == -1)
        cout << "Target is not present.\n";
    else
        cout << "The index is: " << ans << "\n";
    return 0;
}