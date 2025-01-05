#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *right;
    Node *left;

    Node(int data){
        this->data = data;
        this->right = NULL;
        this->left = NULL;
    }

};

int heightoftree(Node* root){
    if(root==NULL){
        return 0;
    }
    int leftroot = heightoftree(root->left);
    int rightroot = heightoftree(root->right);
    if(leftroot>rightroot){
        return leftroot + 1;
    }
    else{
        return rightroot + 1;
    }

}

int heightoftree(Node* root){
    if(root==NULL){
        return 0;
    }

    queue<Node*> q;
    q.push(root);
    int depth = 0;
    while(!q.empty()){
        depth++;
        int levelsize = q.size();
        for(int i = 0;i<levelsize ;i++){
            Node* node = q.front();
            q.pop();
            if(node->left){
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }
        }
    }
    return depth;
}