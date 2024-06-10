/* 
The main idea is to apply the Triangle Inequality Theorem, which states that the sum of any two sides of a triangle must be greater than 
the length of the third side. If this condition holds true for all three pairs of sides, we can form a valid triangle. */

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a =1;
    int b =2;
    int c =3;

    int c1 = (a+b)>c;
        int c2 = (b+c)>a;
        int c3 = (c+a)>b;
        
        if(c1&&c2&&c3){
            cout<< "YES";
        }
        else{
            cout<<"NO";
        }
}