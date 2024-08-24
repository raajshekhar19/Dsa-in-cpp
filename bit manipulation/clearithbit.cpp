#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 9;
    int k = 3;
    cout<<(n&(~(1<<k)));
}