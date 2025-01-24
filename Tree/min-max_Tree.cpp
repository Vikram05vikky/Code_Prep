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
        left=right=nullptr;
    }
};
// Node* root=nullptr;
Node* constructTree(Node* root, int val)
{
    if(!root)
    {
        return new Node(val);
    }
    if(val<root->data)
    {
        root->left=constructTree(root->left,val);
    }
    else if(val>root->data)
    {
        root->right=constructTree(root->right,val);
    }
    return root;
}
void traversal(Node* root)
{
    if(!root)
    return;
    traversal(root->left);
    cout<<root->data<<" ";
    traversal(root->right);
}

Node *findMin(Node* root)
{
    if(root == nullptr)
        return root;
        
    Node *current =root;
    
    while(current->left != nullptr)
        current=current->left;
        
    return current;
}
Node *findMax(Node* root)
{
    if(root == nullptr)
        return root;
        
    Node *current =root;
    
    while(current->right != nullptr)
        current=current->right;
        
    return current;
}

int main()
{
    int n;
    Node* root=nullptr;
    do
    {
        cin>>n;
        if(n==-1)
        break;
        root=constructTree(root,n);
    }while(1);
    //  root=constructTree(arr);
    traversal(root);
    cout<<endl;
    
    Node *minNode = findMin(root);
    cout<<minNode->data<<endl;
    Node *maxNode = findMax(root);
    cout<<maxNode->data;
}
