#include<bits/stdc++.h>
using namespace std;

int merge(vector<int> &a, int low, int mid,int high){
    int left = low;
    int right = mid+1;
     vector<int> temp ;
     int count =0;
      
      while(left<mid && right<high){
        if(a[left]<=a[right]){
            temp.push_back(a[left]);
            left++;
        }
        else{
            temp.push_back(a[right]);
            count = (mid - left + 1);
            right++;
        }
      }
      while (left <= mid) {
        temp.push_back(a[left]);
        left++;
    }

    //  if elements on the right half are still left //
    while (right <= high) {
        temp.push_back(a[right]);
        right++;
    }

    // transfering all elements from temporary to arr //
    for (int i = low; i <= high; i++) {
        a[i] = temp[i - low];
    }
    return count;
}


int mergesort(vector<int> &a, int low, int high){
    int count =0;
    if(low>=high) return count;
    int mid = (low+high)/2;
    count+= mergesort(a,0,mid);
    count +=mergesort(a,mid+1,high);
    count+=merge(a,low,mid,high);
    return count;
}

int numberOfInversions(vector<int> &a, int n){
    return mergesort(a, 0,n-1);
}






int main()
{
    vector<int> a = {5, 4, 3, 2, 1};
    int n = 5;
    int cnt = numberOfInversions(a, n);
    cout << "The number of inversions is: "
         << cnt << endl;
    return 0;
}