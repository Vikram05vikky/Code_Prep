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
}
