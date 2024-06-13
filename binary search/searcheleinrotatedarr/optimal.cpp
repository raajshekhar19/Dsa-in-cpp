#include<bits/stdc++.h>
using namespace std;

int search(vector<int> &arr, int n , int k){
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = low +(high -low)/2;
        if(arr[mid]==k) return mid;
        
        //left part sorted
        if(arr[low]<=arr[mid]){
            //if target lies in it 
            if(arr[low]<=k && k<=arr[mid]){
                    high= mid -1;
            }

            else{
                low = mid +1;
            }
        }

        //right part sorted
        else{
            //if target lies
            if(arr[mid]<=k && k<=arr[high]){
                low = mid +1;
            }
            else{
                high = mid -1;
            }
        }
    }
    return -1;
}
/* 
logic kyy hai??
arr m mid find kar agar wo target k equal h to return kar
nhi to
jo sorted part h usko check kar 
kyy element h y nhi
agar h to ok
nhi h to jo unsorted h usme..

 */
int main()
{
    vector<int> arr = {7, 8, 9, 1, 2, 3, 4, 5, 6};
    int n = 9, k = 1;
    int ans = search(arr, n, k);
    if (ans == -1)
        cout << "Target is not present.\n";
    else
        cout << "The index is: " << ans << "\n";
    return 0;
}