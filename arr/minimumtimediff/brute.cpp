#include<bits/stdc++.h>
using namespace std;

//wrong

int main(){
    vector<string>timePoints = {"23:59","00:00"};
    vector<int>minutes;
        for(int i = 0;i<timePoints.size();i++){
            minutes.push_back(stoi(timePoints[i].substr(3,2)));
        }
        sort(minutes.begin(),minutes.end());
        for(int i =0;i<minutes.size();i++){
            cout<<minutes[i]<<" ";
        }
        cout<<endl;
        int diff = INT_MAX;
        for(int i =1;i<minutes.size();i++){
            int cdiff = minutes[i] - minutes[i-1];
            if(cdiff<diff){
                diff = cdiff;
            }
        }
        if(diff>30){
            diff = 60 - diff;
        }
        cout<<diff;

}