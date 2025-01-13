#include<bits/stdc++.h>
using namespace std;

class node{
    int data;
    node* left;
    node* right;
    node(int val){
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

int widthOfBtree(node* root){
    if(root==NULL){
        return 0;
    }
    int ans = 0;
    queue<pair<node*,int>>q;
    q.push({root,0});
    while(!q.empty()){
        int size = q.size();
        int mmin = q.front().second;
        int first,last;
        

    }
}