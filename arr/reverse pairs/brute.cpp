#include<bits/stdc++.h>
using namespace std;

int team(vector<int> &a, int n){
    int counter = 0;
    for(int i =0;i<n;i++){
        for(int j =i+1;j<n;j++){
            if(a[i]>2*a[j]){
                counter++;
            }
        }
    }
    return counter;
}

int main()
{
    vector<int> a = {4, 1, 2, 3, 1};
    int n = 5;
    int cnt = team(a, n);
    cout << "The number of reverse pair is: "
         << cnt << endl;
    return 0;
}