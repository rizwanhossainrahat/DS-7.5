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

void middle_elemet(Node* head)
{
    Node* tmp=head;
    int count=0;
    while(tmp!=NULL)
    {
        count++;
        tmp=tmp->next;
    }
    Node* tmp2=head;
    int n=count/2;
    if(n%2==0)
    {
        for (int i = 1; i <=n; i++)
        {
            tmp2=tmp2->next;
        }
         cout<<tmp2->val<<endl;
    }
    else
    {
        for (int i = 1; i < n; i++)
        {
            tmp2=tmp2->next; 
        }
        cout<<tmp2->val<<" "<<tmp2->next->val; 
        // cout<<<<" ";
        
    }
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
   
    // print_list(head);
    middle_elemet(head);
    return 0;
}