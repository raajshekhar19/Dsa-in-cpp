#include<bits/stdc++.h>
using namespace std;

int main(){
    for(int i =0; i<=5;i++){
        for (int j =0;j<i;j++){
            if(i%2==0){
                cout<<char('A'+j)<<" ";
            }
            else{
                cout<<j+1<<" ";
            }
        }
        cout<<endl;
    }
}