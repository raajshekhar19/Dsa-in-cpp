#include<bits/stdc++.h>
using namespace std;



int main(){
    vector<int> arr = {100, 200, 1, 2, 3, 4};
    int n = arr.size();
        int longest =1;
        for(int i=0;i<n;i++){
            int counter =1;
            int x = arr[i];
            for(int j=0;j<n;j++){
                if(x+1==arr[j]){
                    counter++;
                    x++;
                }
            }
            longest =max(longest,counter);

        }
        cout<<longest;

}