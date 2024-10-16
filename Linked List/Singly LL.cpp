        
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    
     Node(int value) 
     {
        this->data = value;
        this->next = nullptr;
    }
};

void insertAtEnd(Node* &head, int value) 
{
    Node* newNode = new Node(value);     
    
    if(head==nullptr) 
    {
        head = newNode;
    } 
    else 
    {
        Node* temp = head;
        while(temp->next!=nullptr) 
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void printList(Node* head) 
{
    Node* temp = head;
    while(temp)
    {
        cout << temp->data<<" ";
        temp = temp->next;
    }
}

Node* reverseSLL(Node *head)
{
    Node* temp=nullptr;
    Node* curr=head;
    Node* prev=nullptr;
    
    while(curr!=nullptr)
    {
        temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    return prev;
}

int main() {
    Node* head = nullptr;
    int value;

    while(cin>>value && value!=-1) 
    {
        insertAtEnd(head, value);
    }
    Node* temp=reverseSLL(head);
    printList(head);

    return 0;
}
