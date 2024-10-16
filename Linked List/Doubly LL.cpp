
#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node *prev;
    
    Node(int value)
    {
        this->data=value;
        this->next=nullptr;
        this->prev=nullptr;
    }
};

void insert(Node* &head,int value)
{
    Node* newNode = new Node(value);
    if(head==nullptr)
        head=newNode;
    else
    {
        Node *temp=head;
        while(temp->next)
        {
            temp=temp->next;
        }
        temp->next=newNode;
        newNode->prev=temp;
    }
}

void print(Node* head)
{
    Node *temp=head;
    
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
Node* reverseDLL(Node* head)
{   
    Node* temp=nullptr;
    Node *curr=head;
    Node* prev=nullptr;

    while(curr)
    {
        temp=curr->next;
        curr->next=prev;
        curr->prev=temp;
        prev=curr;
        curr=temp;
    }
    return prev;

}

int main()
{
    Node* head=nullptr;
    int value;
    
    while(cin>>value && value!=-1)
    {
        insert(head,value);
    }
    Node *temp=reverseDLL(head);
    print(temp);
}

