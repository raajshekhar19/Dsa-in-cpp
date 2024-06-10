//ooptimal

#include<bits/stdc++.h>
using namespace std;

int leftrotate(vector<int>&arr, int n, int r){
    //reverse the leftside of rotoriddx
    //reverse(arr,arr+r);    
        int p1 = 0;
        int p2 = r-1;
        while(p1<p2){
            swap(arr[p1],arr[p2]);
            p1++;
            p2--;
        }

    //reverse the right side of the rotoridx
    //reverse(arr+d,arr+n);
        int q1 = r;
        int q2 = n-1;
        while(q1<q2){
            swap(arr[q1],arr[q2]);
            q1++;
            q2--;
        }

    //reverse the overall arr 
    //reverse(arr,arr+n);
        int r1 =0;
        int r2 = n-1;
        while(r1<r2){
            swap(arr[r1],arr[r2]);
            r1++;
            r2--;

        }

}

//time complexity-> O(r)+O(n-r)+O(n)=O(2n)
//space complexity -> O(1)

int main(){
    vector<int> arr = {1,2,3,4,5,6,7};
    int n = arr.size();
    int r =3;
    leftrotate(arr,n,r);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}