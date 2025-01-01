#include <bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node *left;
    node *right;

    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildTree(node *root){
    cout << "Enter the data :" << endl;
    int data;
    cin >> data;
    root = new node(data);
    if (data == -1){
        return NULL;
    }
    cout << "Enter the data for inserting in the left of" << root->data << endl;
    root->left = buildTree(root->left);
    cout << "Enter the data for inserting in the right of " << root->data << endl;
    root->right = buildTree(root->right);
    return root;
}

void levelOrderTraversal(node *root){
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty()){
        node *temp = q.front();
        q.pop();
        if (temp == NULL){
            cout << endl;
            if (!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout << temp->data << " ";
            if (temp->left){
                q.push(temp->left);
            }
            if (temp->right){
                q.push(temp->right);
            }
        }
    }
}

void rlevelOrderTraversal(node * root){
    stack<node*>st;
    st.push(root);
    st.push(NULL);
    while(!st.empty()){
        
    }
}

void inorderTraversal(node* root){
    if(root==NULL){
        return;
    }
    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);
}
void predorderTraversal(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    predorderTraversal(root->left);
    predorderTraversal(root->right);
}
void postorderTraversal(node* root){
    if(root==NULL){
        return;
    }
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout<<root->data<<" ";
}

int main(){

    // creation
    node *root = NULL;
    root = buildTree(root); // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    // lot
    levelOrderTraversal(root);

    //rot
    rlevelOrderTraversal(root);


    //iot
    inorderTraversal(root);
}