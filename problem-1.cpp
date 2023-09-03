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
int size(Node* head)
{
    Node* tmp=head;
    int count=0;
    while (tmp!=NULL)
    {
        count++;
        tmp=tmp->next;
    }
    cout<<count<<endl;
    return count;
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
int main()
{
    Node* head1=NULL;
    Node* tail1=NULL;

    Node* head2=NULL;
    Node* tail2=NULL;
  
    while(true)
    {
         int val;
        cin>>val;
        if(val==-1)
        break;
        insert_at_tail(head1,tail1,val); 
    }

     while(true)
    {
        int val2;
        cin>>val2;
        if(val2==-1)
        break;
        insert_at_tail(head2,tail2,val2);
       
    }

    print_linklist(head1);
    print_linklist(head2);
    // size(head1);
    // size(head2);
    if(size(head1)==size(head2))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}