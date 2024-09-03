#include<bits/stdc++.h>
using namespace std;

int chalkReplacer(vector<int>& chalk, int k) {
        int i = 0;
        int ans = 0;
        int n = chalk.size();
        while((k-chalk[i%n])>=0){
            k = k - chalk[i%n];
            ans = i%n;
            i++;
        }
        return i%n;
    }

int main(){
    vector<int> chalk = {5,1,5};
    int k = 22;
    cout<<chalkReplacer(chalk,k);
}