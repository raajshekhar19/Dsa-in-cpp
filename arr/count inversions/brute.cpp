#include<bits/stdc++.h>
using namespace std;
int numberOfInversions(vector<int> &a, int n){
    int counter =0;
    for(int i =0;i<n;i++){
        for(int j =i+1;j<n;j++){
            if(a[i]>a[j]){
                counter++;
            }
        }
    }
    return counter;
}

//time complexity -> O(n^2)
//space complexity - O(1)

int main()
{
    vector<int> a = {5, 4, 3, 2, 1};
    int n = 5;
    int cnt = numberOfInversions(a, n);
    cout << "The number of inversions is: "
         << cnt << endl;
    return 0;
}