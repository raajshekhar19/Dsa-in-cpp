#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Swap two numbers :"<<endl;
    int a = 2;
    int b = 3;
    a = a ^ b;
    b = a^b;
    a = b ^ a;
    cout<<a<<endl;
    cout<<b<<endl;

}