 #include<bits/stdc++.h>
 using namespace std;

 vector<int> row(int n ){
    vector<int> ok;
    long long ans = 1;
    ok.push_back(ans);
    for(int i= 0;i<n;i++ ){
        ans = ans*(n-i);
        ans = ans/(i+1);
        ok.push_back(ans);
    }
    return ok;
 }


 int main(){
    vector<vector<int>> pascaltriangle ;
    int n = 5;
    for(int i = 0; i<=n;i++){
        pascaltriangle.push_back(row(i));
    }

   for (auto it : pascaltriangle) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout <<endl;
    }
 }