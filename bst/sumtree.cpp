#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;
    node(int val){
        this->data = val;
        this->left = nullptr;
        this->right = nullptr;
    }
};

//sum tree -> left node ->data + right->node ka data = root node k data

pair<bool, int>helper(node*root){
    //root is null then true
    if(root==NULL){
        pair<bool,int> p = make_pair(true, 0);
        return p;
    }
    // root is a leaf node
    if(root->left== NULL && root->right ==NULL){
        pair<bool,int>p = make_pair(true,root->data);
        return p;
    }
    pair<bool,int> lt = helper(root->left);
    pair<bool,int> rt = helper(root->right);

    // three conditions to check if 
    //if the left is a sum tree
    //same to the right
    //and finally if their sum is equal to root node
    bool ltans = lt.first;
    bool rtans = rt.first;
    bool condition = root->data == lt.second + rt.second;

    pair<bool, int> ans;
    if(ltans && rtans && condition){
        ans.first = true;
        ans.second = 2* root->data;
    } 
    else{
        ans.first =  false;
    }
    return ans;
}

bool isSumtree(node* root){
    return helper(root).first;
}