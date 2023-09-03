#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void reverse_print(Node* n)
{
    if(n==NULL)
    return;
    reverse_print(n->next);
    cout<<n->val<<" ";
}

void insert_tail(Node* &head,Node* &tail,int val)
{
    Node* newnode=new Node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
    }
    tail->next=newnode;
    tail=newnode;
}
void print_list(Node* head)
{
    Node* tmp=head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    
}
int main()
{

    Node* head=NULL;
    Node* tail=NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val==-1)
        break;
        insert_tail(head,tail,val);
    }
    reverse_print(head);
    // print_list(head);
    return 0;
}