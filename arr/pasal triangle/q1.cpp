/* 
the question is in a pascal triangle find the n th and the r th element 
the easy step is (n-1)C(r-1)
 */


#include<bits/stdc++.h>
using namespace std;

int nCr(int n, int r){
    long long res =1;
    for(int i =0;i<r;i++){
        res =res*(n-i);
        res = res/(i+1); 
    }
    return res;
}
//brute
//time complexity ->O(n)+O(r)+O(n-r)
//space complexity -> O(1)

//optimum
//time complexity -> O(r)
//space complexity -> O(1)

int main(){
    cout<<"print the nth row element and the rth column element"<<" ";
    int n = 10;
    int r=3;
    cout<<nCr(n-1,r-1);

}