#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

struct TreeNode* newNode(int data) {
    struct TreeNode* newNode = new struct TreeNode;
    if (!newNode) {
        cout << "Memory allocation failed!" << endl;
        exit(EXIT_FAILURE);
    }

    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

map<int, int> mpp;

TreeNode* solve(vector<int>& inorder, int inStart, int inEnd, vector<int>& preorder, int preStart, int preEnd) {
    if (preStart > preEnd || inStart > inEnd) return NULL;

    TreeNode* root = newNode(preorder[preStart]);
    int inRoot = mpp[preorder[preStart]];

    root->left = solve(inorder, inStart, inRoot - 1, preorder, preStart + 1, preStart + inRoot - inStart);
    root->right = solve(inorder, inRoot + 1, inEnd, preorder, preStart + inRoot - inStart + 1, preEnd);

    return root;
}

TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
    for (int i = 0; i < inorder.size(); i++) {
        mpp[inorder[i]] = i;
    }
    TreeNode* root = solve(inorder, 0, inorder.size() - 1, preorder, 0, preorder.size() - 1);
    return root;
}

TreeNode* bstFromPreorder(vector<int>& preorder) {
    vector<int> inorder(preorder.begin(), preorder.end());
    sort(inorder.begin(), inorder.end());
    return buildTree(preorder, inorder);
}

void preorderTraversal(TreeNode* root)
{
    //base case
    if(root == NULL){
        return;
    }

    cout<<root -> data << " ";
    preorderTraversal(root -> left);
    preorderTraversal(root -> right);
}

int main() {
    vector<int> preorder;
    preorder.push_back(8);
    preorder.push_back(5);
    preorder.push_back(1);
    preorder.push_back(7);
    preorder.push_back(10);
    preorder.push_back(12);

    TreeNode* root = bstFromPreorder(preorder);

    cout<<"Printing the preorder traversal output:"<<endl;
    preorderTraversal(root);
    return 0;
}
