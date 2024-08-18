#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        set<int>s;
        for(int i = 0;i<n;i++){
            cin>>arr[i];
        }
        int length = arr.size();
        bool ok = true;
        if(length==1){
            cout<<"YES"<<endl;
        }
        else{
            s.insert(arr[0]);
            for(int i = 1;i<n;i++){
                if(s.find(arr[i]+1)==s.end() && s.find(arr[i]-1)==s.end()){
                        cout<<"NO"<<endl;
                        ok=false;
                        break;
                }
                s.insert(arr[i]);
            }
            if(ok){
                cout<<"YES"<<endl;
            }      
        }
        
    }
}