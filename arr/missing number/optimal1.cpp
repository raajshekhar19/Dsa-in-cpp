#include<bits/stdc++.h>
using namespace std;

//time - > sort +O(N)
//space -> O(1)

int main(){
    vector <int> arr ={0,4,2,1};
    sort(arr.begin(),arr.end());

    int n = arr.size();
    int sum = (n*(n+1))/2;
    int s=0;
     for(int i = 0 ; i < n ; i ++)
     {
        s = s+arr[i];
     }

     int missing= sum - s;
     cout<<missing;
    
}