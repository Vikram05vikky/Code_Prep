#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* left;
    Node* right;
    
    Node(int data)
    {
        this->data=data;
        right=left=nullptr;
    }
};

Node* createTree(vector<int> &arr)
{
    Node* root=new Node(arr[0]);
    queue<Node*> q;
    q.push(root);
    int ind=1;
    
    while(!q.empty() && ind < arr.size())
    {
        Node* currNode = q.front();
        q.pop();
        
        if(ind < arr.size() && arr[ind]!=-1)
        {
            currNode->left=new Node(arr[ind]);
            q.push(currNode->left);
        }
        ind++;
        
        if(ind < arr.size() && arr[ind]!=-1)
        {
            currNode->right=new Node(arr[ind]);
            q.push(currNode->right);
        }
        ind++;
    }
    return root;
}


//Level-order (BFS)
void levelOrder(Node* root)
{
    queue<Node*> q;
    q.push(root);
    
    while(!q.empty())
    {
        Node* temp = q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right);
    }
}

//In-order
void inOrder(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

//Pre-order
void preOrder(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

//Post-order
void postOrder(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

int main()
{
    vector<int> arr={1,2,3,4,-1,-1,5};
    Node* root = createTree(arr);
    cout<<"Level order: ";
    levelOrder(root);
    cout<<endl<<endl;
    
    cout<<"In-order: ";
    inOrder(root);
    cout<<endl<<endl;
    
    cout<<"Pre-order: ";
    preOrder(root);
    cout<<endl<<endl;
    
    cout<<"Post-order: ";
    postOrder(root);
    cout<<endl<<endl;
    
    
    
}
