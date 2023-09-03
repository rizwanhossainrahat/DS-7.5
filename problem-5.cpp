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
        return;
    }
    tail->next=newnode;
    tail=newnode;
}

void  print_linklist(Node* head)
{
    Node* tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }

}
void sort_asending_order(Node* head)
{
    Node* tmp=head;
    for (Node* i = head; i!=NULL; i=i->next)
    {
        for (Node* j = i->next; j!=NULL; j=j->next )
        {
            if(i->val<j->val)
            {
                swap(i->val,j->val);
            }
            //   cout<<tmp->val<<" ";
        }
      cout<<i->val<<" ";
    }
    
}
void sort_desending_order(Node* head)
{
    Node* tmp=head;
    for (Node* i =head; i!=NULL; i=i->next)
    {
        for (Node* j =i->next; j!=NULL; j=j->next)
        {
           if(i->val>j->val)
           {
            swap(i->val,j->val);
           }
        }
        cout<<i->val<<" ";
    }
    
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;

  
    while(true)
    {
      int val;
        cin>>val;
        if(val==-1)
        break;
        insert_at_tail(head,tail,val); 
    }

    // print_linklist(head);
    // sort_asending_order(head);
   sort_desending_order(head);
    return 0;
}