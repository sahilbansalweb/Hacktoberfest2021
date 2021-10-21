#include<bits/stdc++.h>
using namespace std;
class TreeNode {
    public:
        int val;
        TreeNode *right,*left;
        TreeNode(int val) {
            this->val = val;
            this->left = NULL;
            this->right = NULL;
        }
};

TreeNode *buildTree(int l, int r, vector<int> arr) {

    if(l > r) return NULL;
    
    // find the mid element and make a node out of it and 
    int mid = l + (r-l)/2;
    TreeNode *root = new TreeNode(arr[mid]);
    
    //add recursively the two halfs of array to the left and right pointer of the node.
    root->left = buildTree(l, mid-1, arr);
    root->right = buildTree(mid+1, r, arr);
    
    //finally return the root
    return root;
    
}

void inorder(TreeNode *root) {
    
    if(!root) return;
    
    inorder(root->left);
    
    cout<<root->val<<" ";
    
    inorder(root->right);
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    int n = arr.size();
    
    TreeNode *root = buildTree(0, n-1, arr);
    
    inorder(root);

}
