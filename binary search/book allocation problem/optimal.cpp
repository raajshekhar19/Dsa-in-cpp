#include<bits/stdc++.h>
using namespace std;
 
 int allotbook(vector<int> &books, int pages){
    int n = books.size();
    int stack =0;
    int student = 1;
    for(int i = 0 ; i<n;i++){
        if(stack +books[i] <=pages){
            stack+=books[i];
        }
        else{
            student++;
            stack= books[i];
        }
    }
    return student;
 
 }
 


 int minimumbooks(vector<int> &books, int n, int m){
    int sumpage = 0;
    int maxi = INT_MIN;
    int ans = -1;
    for(int i =0;i<n;i++){
        sumpage+=books[i];
        maxi = max(books[i],maxi);
    }
    int low = maxi;
    int high = sumpage;
    while(low<=high){
        int mid = low +(high -low)/2;
        if(allotbook(books,mid)>m){
            low = mid +1;
        }
        else{
            high = mid -1;
        }
    }
    return low;

 }


int main()
{
    vector<int> books ={25, 46, 28, 49, 24} ;
    int n= 5;
    int m =4;
    int ans = minimumbooks(books, n,m);
    cout << "The maximum poss " << ans << "\n";
    return 0;
}