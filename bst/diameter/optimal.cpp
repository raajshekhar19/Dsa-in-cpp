#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int val;
    node*right;
    node*left;

    node(int data){
        this->val = data;
        this->left = NULL;
        this->right = NULL;
    }
};

int height(node*root, int &dia){
    if(root==NULL){
        return 0;
    }
    int lh = height(root->left,dia);
    int rh = height(root->right,dia);
    dia = max(dia,lh+rh);
    return 1 + max(lh,rh);
}

int diameter(node* root){
    int dia = 0;
    height(root,dia);
    return dia;
}



int main(){

}