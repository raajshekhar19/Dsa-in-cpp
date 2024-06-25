#include<bits/stdc++.h>
using namespace std;

class hero{
    private:
    int level;
    
    public:
    int getLevel(){
        return level;
    }
    int setLevel(int n){
        level = n;
    }



    int health;
    // if the class is empty then its size is 1
};


int main(){

    //creating an object
    hero h1;
    cout<<"the size of hero h1 is "<<sizeof(h1)<<endl;

    //ascess using dot operator
    h1.health=100;
    cout<<"health is "<<h1.health<<endl;
        /*
    ascess modifiers-> kisi bhi dalta ko kahan pe ascess kar sakte hai in class 
    out of class
    ->public
    ->private
    ->protected
    by default is private
 
    public -> can be ascessed anywhere
     private -> only within the class

     */
    h1.setLevel(30);
    cout<<"level of h1 "<<h1.getLevel();


}