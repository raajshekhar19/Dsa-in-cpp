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

void levelorderrtraversal(node * root){
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        node* temp = q.front();
        cout<<temp->data<<" ";
        q.pop();

        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
}

int main(){
    node* root = NULL;
    root = buildTree(root);
    cout<<"Level order traversal "<<endl;
    levelorderrtraversal(root);
}