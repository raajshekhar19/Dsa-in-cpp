#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<char>>music(n,vector<char>(4));
        vector<int>ans;
        for(int i = 0;i<n;i++){
            for( int j = 0;j<4;j++){
                cin>>music[i][j];
            }
        }
        for(int i = 0;i<n;i++){
            for( int j = 0;j<4;j++){
                if(music[i][j]=='#'){
                    ans.push_back(j+1);
                    break;
                }
            }
        }
        for(int i = ans.size() -1;i>=0;i--){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}