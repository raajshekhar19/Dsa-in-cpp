#include<bits/stdc++.h>

using namespace std;

int solve(int n, int key, vector < int > &arr) {
  int res = -1;
  int low = 0;
  int high = n-1;
  while(low<=high){
    int mid = low +(high -low)/2;
    if(arr[mid]==key){
        res = mid;
        high = mid-1;
    }
    else if(arr[mid]>key){
        high = mid -1;
    }
    else{
        low = mid+1;
    }
  }
  return res;
}
int psolve(int n, int key, vector < int > &arr) {
  int res = -1;
  int low = 0;
  int high = n-1;
  while(low<=high){
    int mid = low+(high -low)/2;
    if(arr[mid]==key){
        res = mid;
        low = mid +1;
    }
    else if(arr[mid]<key){
        low = mid +1;
    }
    else if(arr[mid]>key){
        high = mid -1;
    }
  }
  return res;
  
}

int main() {
  int n = 7;
  int key = 13;
  vector < int > v = {3,4,13,13,13,20,40};
   
  
  int first = solve(n, key, v);
  cout<<first << "\n";
  int second = psolve(n, key, v);
  cout<<second<< "\n";
   cout<<second-first+1;
  
}