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
            this->data = val;
            left = right = nullptr;
        }
};

Node* constructTree()
{
    int val;
    cin >> val;

    if(val == -1)  // if input is -1, stop tree construction
        return nullptr;
    
    Node *root = new Node(val);
    queue<Node*> q;
    q.push(root);

    while(!q.empty())
    {
        Node* current = q.front();
        q.pop();

        cin >> val;
        if(val == 0)  // if val is 0, stop tree construction
            break;
        if(val != -1)
        {
            current->left = new Node(val);
            q.push(current->left);
        }

        cin >> val;
        if(val == 0)  // if val is 0, stop tree construction
            break;
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

        cout << current->data << " ";
        if(current->left)
            q.push(current->left);
        if(current->right)
            q.push(current->right);
    }
}

// Function to find the inorder successor (smallest node in the right subtree)
Node* minValueNode(Node* node)
{
    Node* current = node;
    while (current && current->left != nullptr)
        current = current->left;
    return current;
}

// Function to delete a node in a BST
Node* deleteNode(Node* root, int key)
{
    if (root == nullptr) 
        return root;

    // If the key to be deleted is smaller than the root's key, it lies in the left subtree
    if (key < root->data)
        root->left = deleteNode(root->left, key);

    // If the key to be deleted is larger than the root's key, it lies in the right subtree
    else if (key > root->data)
        root->right = deleteNode(root->right, key);

    // If key is the same as the root's key, this is the node to be deleted
    else
    {
        // Case 1: Node with only one child or no child
        if (root->left == nullptr)
        {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == nullptr)
        {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        // Case 2: Node with two children: Get the inorder successor (smallest in the right subtree)
        Node* temp = minValueNode(root->right);

        // Copy the inorder successor's content to this node
        root->data = temp->data;

        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

int main()
{
    Node* root = constructTree();
    cout << "Original Tree: ";
    traversal(root);
    cout << endl;

    int key;
    cout << "Enter the value to delete: ";
    cin >> key;

    root = deleteNode(root, key);

    cout << "Tree after deletion: ";
    traversal(root);
    cout << endl;

    return 0;
}
