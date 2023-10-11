#include<iostream>
#include<queue>
using namespace std;

class node
{
    public:
        int data;
        node* right;
        node* left;

    node(int d){
        this -> data = d;
        this -> right = NULL;
        this -> left = NULL;
    }

};

node* buildTree(node* root)
{
    int data;
    cout<<"Enter the data: "<<endl;
    cin>>data;
    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout<<"Enter data to insert into left of "<<data<<endl;
    root -> left = buildTree(root -> left);
    cout<<"Enter data to insert into right of "<<data<<endl;
    root -> right = buildTree(root -> right);

    return root;
}

void buildfromLevelOrderTraversal(node* &root)
{
    queue<node*> q;
    cout<<"Enter data for root: "<<endl;
    int data;
    cin>>data;
    root = new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout<<"Enter left node for  "<<temp->data<<": "<<endl;
        int leftData;
        cin>>leftData;

        if(leftData!=-1){
            temp -> left = new node(leftData);
            q.push(temp -> left);
        }

        cout<<"Enter right node for "<<temp->data<<": "<<endl;
        int rightData;
        cin>>rightData;

        if(rightData!=-1){
            temp -> right = new node(rightData);
            q.push(temp -> right);
        }
    }
}

void levelOrderTraversal(node* root)
{
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            cout<<temp -> data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

void inorderTraversal(node* root)
{
    //base case
    if(root == NULL){
        return;
    }

    inorderTraversal(root -> left);
    cout<<root -> data << " ";
    inorderTraversal(root -> right);
}

void preorderTraversal(node* root)
{
    //base case
    if(root == NULL){
        return;
    }

    cout<<root -> data << " ";
    preorderTraversal(root -> left);
    preorderTraversal(root -> right);
}

void postorderTraversal(node* root)
{
    //base case
    if(root == NULL){
        return;
    }

    postorderTraversal(root -> left);
    postorderTraversal(root -> right);
    cout<<root -> data << " ";
}

int main()
{
    node* root = NULL;
/*
    //creating a tree
    root = buildTree(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    cout<<"Printing the level order traversal output:"<<endl;
    levelOrderTraversal(root);
    cout<<endl;
    cout<<"Printing the inorder traversal output:"<<endl;
    inorderTraversal(root);
    cout<<endl;
    cout<<"Printing the preorder traversal output:"<<endl;
    preorderTraversal(root);
    cout<<endl;
    cout<<"Printing the postorder traversal output:"<<endl;
    postorderTraversal(root);
    cout<<endl;
*/

    buildfromLevelOrderTraversal(root);
    //1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
    levelOrderTraversal(root);

    return 0;
}