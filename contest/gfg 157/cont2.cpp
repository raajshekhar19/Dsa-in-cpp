#include<bits/stdc++.h>
using namespace std;
int equalDistribution (int n, vector <int> &a) {
   // Write your code here.
   //map.
   //counter==1 -> ek
   //rest in second
   map<int, int> hsh;
   for(int i =0;i<n;i++){
      hsh[a[i]]++;
   }
   vector<int> p1={};
   vector<int> p2={};
   for(auto it: hsh){
      if(it.second==1){
         p1.push_back(it.first);
      }
      else{
        int k = it.first;
          while(k--){
            p2.push_back(it.second);
         }
      }
   }
   for(int i =0;i<p1.size();i++){
    cout<<p1[i];
   }
   for(int i =0;i<p2.size();i++){
    cout<<p2[i];
   }
   if(p1.size()==p2.size()){
      return 1;
   }
   else{
      return 0;
   }
}

int main(){
    vector<int> a ={2,2,5,6};
    int n = a.size();
    cout<<equalDistribution(n,a);


}