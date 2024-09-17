#include<bits/stdc++.h>
using namespace std;
class node {
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data =d;
        this->left=NULL;
        this->right=NULL;
    }

};

node* buildTree(node* root){
    cout<<"enter the data for the node"<<endl;
    int data;
    cin>>data;
    root = new node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"ENter data for inserting in left of "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter data for inserting in right of "<<data<<endl;
    root->right = buildTree(root->right);
    return root;
}

void inorder(node *root){
    //base case
    if(root==NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}
void preorder(node *root){
    //base case
     if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
   
    inorder(root->left);
    inorder(root->right);
}
void postorder(node * root){
    if(root==NULL){
        return ;
    }
    
   
    inorder(root->left);
    inorder(root->right);
    cout<<root->data<<" ";
}

int main(){
    node* root = NULL;
    root = buildTree(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    inorder(root);
}