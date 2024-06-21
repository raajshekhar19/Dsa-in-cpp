#include<bits/stdc++.h>
using namespace std;


int median(vector<int>&a,vector<int> &b){
    int n = a.size();
    int m = b.size();
    int k = m + n;
    int left = 0;
    int el1 = k/2;
    int el2 =( k/2 )- 1;
    int right = 0;
    int counter=0;
    int element1 =-1;
    int element2 =-1;
    while(left<n && right<m){
        if(a[left]<b[right]){
            if(counter==el1) element1=a[left];
            if(counter==el2) element2=a[left];
            counter++;
            left++;
        }
        else{
            if(counter==el1) element1=b[right];
            if(counter==el2) element2=b[right];
            counter++;
            right++;
        }
    }
    while(left<n){
        if(counter==el1) element1=a[left]; 
        if(counter==el2) element2=a[left];     
        counter++;
        left++;
    }
    while(right<m){
        if(counter==el1) element1=b[right];
        if(counter==el2) element2=b[right];
        counter++;
        right++;
    }

    if(k%2==1){
        return element1;
    }
    else{
        return (element1+element2)/2;
    }

}

int main()
{
    vector<int> a = {1, 4, 7, 10, 12};
    vector<int> b = {2, 3, 6, 15};
    cout << "The median of two sorted array is "<< median(a, b) << '\n';
}