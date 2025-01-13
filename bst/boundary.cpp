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

void leftboundary(node* root,vector<int>&ans){
    if(root==NULL){
        return ;
    }
    if(root->left==NULL && root->right==NULL){
        return ;
    }
    ans.push_back(root->data);
    if(root->left){
        leftboundary(root->left,ans);
    }
    else{
        leftboundary(root->right,ans);
    }
}

void bottomboundary(node* root,vector<int>&ans){
    if(root==NULL){
        return ;
    }
    if(root->left==NULL && root->right==NULL){
        ans.push_back(root->data);
        return;
    }
    bottomboundary(root->left,ans);
    bottomboundary(root->right,ans);
}

void rightboundary(node * root, vector<int>&ans){
    if(root==nullptr){
        return ;
    }
    if(root->left == NULL && root->right == NULL){
        return ;
    }
    if(root->right){
        rightboundary(root->right,ans);
    }
    else{
        rightboundary(root->left,ans);
    }
    ans.push_back(root->data);
}


vector<int> boundary(node* root){
    
    vector<int>ans;

    if(root==NULL){
        return ans;
    }
    
    ans.push_back(root->data);

    //traverse left boundary
    leftboundary(root->left,ans);

    //traverse left subtree boundary
    bottomboundary(root->left,ans);

    //traverse right subtree boundary
    bottomboundary(root->right,ans);

    //traverse right boundary
    rightboundary(root->right,ans);

    return ans;
}