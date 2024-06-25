#include<bits/stdc++.h>
using namespace std;

class hero{
    public:
    int level= 10;

};


int main(){

//static allocation
hero mukesh;
cout<<"level is : "<<mukesh.level<<endl;

//dynamic allocation
hero *raaj = new hero;
cout<<"level is : "<<(*raaj).level<<endl;
cout<<"level is : "<<raaj->level<<endl;

}