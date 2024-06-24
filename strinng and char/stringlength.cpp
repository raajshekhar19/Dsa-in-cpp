#include<bits/stdc++.h>
using namespace std;

int getlength(char name[]){
    int counter =0;
    while(name[counter]!=0){
        counter++;
    }
    return counter;

}



int main(){
    char name[20];

    cout<<"Enter your name"<<endl;
    cin>>name;
    cout<<getlength(name);
}