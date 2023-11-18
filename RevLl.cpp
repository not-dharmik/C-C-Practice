#include <bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};
node* reverseK(node* head,int k){
    if(head==NULL || k==1)
        return head;
    node*dummy = new node(0);    
    node* prev=dummy;
    node* curr=dummy;
    node* nex=dummy;
    int count =0;
    while(curr->next != NULL){
        curr=curr->next;
        count++;
    }
    while(count>=k){
        curr=prev->next;
        nex=curr->next;
        for(int i=1;i<k;i++){
            curr->next=nex->next;
            nex->next=head->next;
            prev->next=nex;
            nex=curr->next;
        }
        prev=curr;
        count-=k;
    }
    return dummy->next;
}

void insert(node* &head,int val){
    node *n = new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void print(node* head){
    node*temp=head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"null"<<endl;
}
