#include <bits/stdc++.h>
using namespace std;

int main(void) {
	// your code goes here
	int n;
	cin>>n;
	int arr[n][n];
	for(int i =0;i<n;i++){
	    for(int j =0;j<n;j++){
	        cin>>arr[i][j];
	    }
	}
	int sum =0;
	for(int i =0;i<n;i++){
	    for(int j = 0;j<n;j++){
	        if(i==j){
	            sum+=arr[i][j];
	        }
	    }
	}
	cout<<sum<<endl;
	for(int i =0;i<n;i++){
	    for(int j =n-1 ;j>=0 ;j--){
	        if((i+j-(n-1))==0){
	            sum +=arr[i][j];
	        }
	    }
	}
	cout<<sum<<endl;
	
	if(n%2!=0){
	    sum = sum - arr[n/2][n/2];
	}
	cout<<sum;

}