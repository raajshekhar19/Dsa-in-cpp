#include <bits/stdc++.h>
using namespace std;

bool ispallindrome(long long n) {
    string str = to_string(n);
    int len = str.length();
    for (int i = 0; i < len / 2; ++i) {
        if (str[i] != str[len - i - 1]) {
            return false;
        }
    }
    return true;
}

int countSuperPalindrome(long long l, long long r) {
    //l ko sqrt
    //ranging till r
    int start = ceil(sqrt(l));
    int counter=0;
    while(start*start<=r){
        if(ispallindrome(start*start)){
            counter++;
        }
        start++;
    }
    return counter;

    
}

int main() {
    long long l = 100;
    long long r = 1000;
    cout << countSuperPalindrome(l, r) << endl;  
    return 0;
}
