                            
#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

// Node structure for the binary tree
struct Node {
    int data;
    Node* left;
    Node* right;
    // Constructor to initialize
    // the node with a value
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    // Function to check if two
    // binary trees are identical
    bool isIdentical(Node* node1, Node* node2){
        // 3 cases
        //if both are null
        if(node1==NULL && node2==NULL){
            return true;
        }
        //if one of both are not null i.e false
        if(node1==NULL || node2 == NULL){
            return false;
        }
        //if both of the nodes has same valuse ensure their subtrees are also identical
        if(node1->data==node2->data){
            return isIdentical(node1->left, node2->left) && isIdentical(node1->right, node2->right);
        }
        //last case if the node values are not true
        return false;
    }
};


int main() {
    // Node1
    Node* root1 = new Node(1);
    root1->left = new Node(2);
    root1->right = new Node(3);
    root1->left->left = new Node(4);

    // Node2
    Node* root2 = new Node(1);
    root2->left = new Node(2);
    root2->right = new Node(3);
    root2->left->left = new Node(4);

    Solution solution;
    
    if (solution.isIdentical(root1, root2)) {
        cout << "The binary trees are identical." << endl;
    } else {
        cout << "The binary trees are not identical." << endl;
    }

    return 0;
}
                            
                        