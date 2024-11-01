#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int value;
    node *next;
    node *prev;
    node(int value){
        this->value=value;
        this->next=NULL;
        this->prev=NULL;
    }
};
void insert_at_head(node *&head, node *&tail,int value){
    node *newnode=new node(value);
    if(head==NULL){
        head=newnode;
        tail=newnode;
        return;
    }
    head->prev=newnode;
    newnode->next=head;
    head=newnode;
    return;
}
void insert_at_tail(node *&head, node*&tail, int value){
    node *newnode=new node(value);
    node *copy=tail;
    if(tail==NULL){
        tail=newnode;
        head=newnode;
        return;
    }
    while(copy->next!=NULL){
        copy=copy->next;
    }
    copy->next=newnode;
    newnode->prev=copy;
    tail=newnode;
    return;
}
void insert_at_any_position(node *head, node *tail, int p, int value){
    node *newnode=new node(value);
    for(int i=1; i<p-1; i++){
        head=head->next;
    }
    newnode->next=head->next;
    head->next=newnode;
    newnode->prev=head;
    head->next->prev=newnode;
    return;
}
void print(node *head){
    while(head!=NULL){
        cout<<head->value<<" ";
        head=head->next;
    }
}
int main()
{
    node *head=NULL;
    node *tail=NULL;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int value;
        cin>>value;
        int pos;
        cin>>pos;
        if(pos==0){
            insert_at_head(head, tail,value);
        }else if(pos==1){
            insert_at_tail(head, tail, value);
        }else{
            int p;
            cin>>p;
            insert_at_any_position(head,tail,p,value);
        }
    }
    print(head);
    return 0;
}