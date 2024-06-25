/* 
int arr[n]
ye jo n size k array banaya h ye to pehli 
baat ek bad practice h

is tyle ke declaration ko static declaration kehte h
ek array assign karte h to uske do parts hote h
ek stack and ek heap
stack is ststically typed
the heap is dynamically typed and has more capacity

we can create the dyanmiccalty typed variable by using new keyword
-> new int;
and we can store this by using a pointer as 
int * ch = new int;
so the ch in the stack points to the new int in heap
we cannot declare the name of the variable in heap


to declare an array write new int[5];
int * arr = new int[5]; array of size 5 
whats the size of that array the size is 4*5 and the pointer 
has the size of 8 -> 28


//for deletion of single elem - delete i;
// for arr is delete []arr;

 */


#include<bits/stdc++.h>
using namespace std;

int getsum(int *arr, int n){
int sum =0;
for(int i =0;i<n;i++){
    sum+=arr[i];
}
return sum;
}
int main(){
    int n;
    cin>>n;
    //variable sized array
    int* arr = new int [n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int ans =  getsum(arr,n);
    cout<<ans;

}