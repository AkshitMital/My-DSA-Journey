#include<iostream>
#include<queue>
#include<vector>

using namespace std;

struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};

struct TreeNode* newNode(int data) {
    struct TreeNode* newNode = new struct TreeNode;
    if (!newNode) {
        cout << "Memory allocation failed!" << endl;
        exit(EXIT_FAILURE);
    }

    newNode->val = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

void solve(TreeNode* root, int k, int& cnt, int& ans) {
    TreeNode* curr = root;
    while (curr) {
        if (curr->left == NULL) {
            cnt++;
            if (cnt == k) {
                ans = curr->val;
                break;
            }
            curr = curr->right;
        } else {
            TreeNode* prev = root;
            while (prev->right && prev->right != curr) {
                prev = prev->right;
            }
            if (prev->right == NULL) {
                prev->right = curr;
                curr = curr->left;
            } else {
                prev->right = NULL;
                cnt++;
                if (cnt == k) {
                    ans = root->val;
                    break;
                }
                curr = curr->right;
            }
        }
    }
    return;
}

int kthSmallest(TreeNode* root, int k) {
    int ans = INT_MAX;
    int cnt = 0;
    solve(root, k, cnt, ans);
    cout<<ans;
    return ans;
}

void buildfromLevelOrderTraversal(TreeNode* &root)
{
    queue<TreeNode*> q;
    cout<<"Enter data for root: "<<endl;
    int data;
    cin>>data;
    root = newNode(data);
    q.push(root);

    while(!q.empty()){
        TreeNode* temp = q.front();
        q.pop();

        cout<<"Enter left node for  "<<temp->val<<": "<<endl;
        int leftData;
        cin>>leftData;

        if (leftData != -1) {
            temp->left = newNode(leftData);
            q.push(temp->left);
        }

        cout<<"Enter right node for "<<temp->val<<": "<<endl;
        int rightData;
        cin>>rightData;

        if (rightData != -1) {
            temp->right = newNode(rightData);
            q.push(temp->right);
        }

    }
}

int main() {
    TreeNode* root = NULL;
    buildfromLevelOrderTraversal(root);
    //5 3 6 2 4 -1 -1 1 -1 -1 -1 -1 -1
    //3 1 4 -1 2 -1 -1 -1 -1
    cout<<"hey";
    kthSmallest(root,3);
    return 0;
}
