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
void insert_at_tail(Node* &head,Node* &tail,int val)
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
void print_linklist(Node* head)
{
    Node* tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
}
void print_maximum_value(Node* head)
{
    Node* tmp=head;
    int max=INT_MIN;
    
    while(tmp!=NULL)
    {
        if(max<tmp->val)
        {
            max=tmp->val; 
        }
         tmp=tmp->next;
    }
    cout<<"maximum value:"<<max<<" ";
}
void print_minimum_value(Node* head)
{
    Node* tmp=head;
    int min=INT_MAX;
    while(tmp!=NULL)
    {
        if(min>tmp->val)
        {
            min=tmp->val;
        }
        tmp=tmp->next;
    }
    cout<<"minimum value:"<<min<<" ";
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
        insert_at_tail(head,tail,val);
    }
    print_maximum_value(head);
    cout<<endl;
    print_minimum_value(head);
    return 0;
}