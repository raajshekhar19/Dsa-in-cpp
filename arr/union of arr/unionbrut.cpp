#include<bits/stdc++.h>
using namespace std;
// time complexity -> 0(n1logn1)+0(n2logn2)+0(n1+n2)
//space complexity ->0(ni+n2)
int main(){
    vector <int> arr1 = {1,1,2,3,4,5};
    vector<int> arr2 = {2,3,4,5,6};

    set<int> st;
    for(int i = 0 ; i<arr1.size(); i++){
        st.insert(arr1[i]);
    }
    for(int i = 0 ; i<arr2.size(); i++){
        st.insert(arr2[i]);
    }

    vector<int> uni;
    for(auto it : st){
        uni.push_back(it);
    }

    for(int i = 0 ; i <uni.size(); i ++){
        cout<<uni[i]<<" ";
    }

}