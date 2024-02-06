#include<iostream>
#include<map>
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

int maxDistance(map<node*, node*>& mpp, node* target)
{
    queue<node*> q;
    map<node*, int> visited;
    q.push(target);
    visited[target] = 1;
    int mini = 0;
    while(!q.empty())
    {
        int freq=0;
        for(int i=0; i<q.size(); i++){
            auto Treenode = q.front();
            q.pop();
            if(Treenode->left && !visited[Treenode->left]){
                freq = 1;
                visited[Treenode->left] = 1;
                q.push(Treenode->left);
            }
            if(Treenode->right && !visited[Treenode->right]){
                freq = 1;
                visited[Treenode->right] = 1;
                q.push(Treenode->right);
            }
            if(mpp[Treenode] && !visited[mpp[Treenode]]){
                freq = 1;
                visited[mpp[Treenode]] = 1;
                q.push(mpp[Treenode]);
            }
        }
        if(freq) mini += 1;
    }

    return mini;
}

node* mapParents(node* root, map<node*, node*>& mpp, int start)
{
    queue<node*> q;
    q.push(root);
    node* res;
    while(!q.empty())
    {
        node* Treenode = q.front();
        q.pop();
        if(Treenode->data==start) res = Treenode;
        
        if(Treenode->left){
            mpp[Treenode->left] = Treenode;
            q.push(Treenode->left);
        }

        if(Treenode->right){
            mpp[Treenode->right] = Treenode;
            q.push(Treenode->right);
        }
    }
    return res;
}


int timeToBurnTree(node* root, int start)
{
    map<node*,node*>mpp;
    node* target = mapParents(root, mpp, start);
    int maxi = maxDistance(mpp, target);
    return maxi;
}

int main()
{
    node* root = NULL;
    root = buildTree(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    //1 2 4 -1 7 -1 -1 -1 3 5 -1 -1 6 -1 -1
    levelOrderTraversal(root);
    cout<<"Minimum time to burn the tree: "<<timeToBurnTree(root,3);
    return 0;
}