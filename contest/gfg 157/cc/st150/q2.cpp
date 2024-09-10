#include <bits/stdc++.h>
using namespace std;

int checker(int x, int y){
    int ans = 0;
   while((x - 2*y) <0){
     ans++;
     y--;
   }
   return ans; 
}




int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int n = min(checker(x,y),checker(y,x));
        cout<<n;
	}

}