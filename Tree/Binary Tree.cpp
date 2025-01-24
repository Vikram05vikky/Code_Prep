
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
Node* constructTree( vector<int>& arr)
{
    Node* root=new Node(arr[0]);
    int ind=1;
    queue<Node*>q;
    q.push(root);
    while(!q.empty() && ind<arr.size())
    {
        Node* current=q.front();
        q.pop();
        if(ind<arr.size() && arr[ind]!=-1)
        {
            current->left=new Node(arr[ind]);
            q.push(current->left);
        }

        ind++;
        if(ind<arr.size() && arr[ind]!=-1)
        {
            current->right=new Node(arr[ind]);
            q.push(current->right);
        }

        ind++;
    }
    return root;
}
void traversal(Node* root)
{
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        Node* current=q.front();
        q.pop();
        cout<<current->data<<" ";
        if(current->left)
        {
            q.push(current->left);
        }
        if(current->right)
        {
            q.push(current->right);
        }
    }
}
int main()
{
    vector<int>arr={1,2,3,4,-1,-1,5};
    Node* root=constructTree(arr);
    traversal(root);
}


/*
#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int data;
        Node *left;
        Node *right;
        Node(int val)
        {
            this->data=val;
            right=left=nullptr;
        }
};

Node* constructTree()
{
    int val;
    cin>>val;
    
    if(val == 0)
        return nullptr;
    
    if(val == -1)
        return nullptr;
        
    Node *root = new Node(val);
    
    if(val == 0)
        return root;
    
    queue<Node*> q;
    q.push(root);
    
    while(!q.empty())
    {
        Node* current = q.front();
        q.pop();
        
        cin>>val;
        if(val == 0)
            return root;
        if(val != -1)
        {
            current->left = new Node(val);
            q.push(current->left);
        }
        
        cin>>val;
        if(val == 0)
            return root;
        if(val != -1)
        {
            current->right = new Node(val);
            q.push(current->right);
        }
    }
    
    return root;
    
}

void traversal(Node* root)
{
    if(!root)
        return;
        
    queue<Node*> q;
    q.push(root);
    
    while(!q.empty())
    {
        Node* current = q.front();
        q.pop();
        
        cout<<current->data<<" ";
        if(current->left)
            q.push(current->left);
        if(current->right)
            q.push(current->right);
    }
}

int main()
{
    Node *root=constructTree();
    traversal(root);
    
}
*/
