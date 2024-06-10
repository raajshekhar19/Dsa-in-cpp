#include<bits/stdc++.h>
using namespace std;
int countMaximumCaves(int n, vector<int> a) {
    // Write your code here.

    //iterate 
    // psum =0
    long long psum =0;
    long long nsum =0;
    int counter =0;
    //counter
    //psum>0 counter++
    //else psum continue
    for(int i =0;i<n;i++){
        nsum+=a[i];
        if(nsum>=0){
            counter++;
            psum+=a[i];
        }
        else{
            nsum=psum;
        }
    }
    return counter;

}

int main(){
    
    cout<<

}