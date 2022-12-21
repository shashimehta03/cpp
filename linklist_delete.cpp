#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int val){
        data=val;
        next=NULL;
    }
};

void insertathead(node* &head,int val){
    node*n=new node(val);
    n->next=head;
    head=n;
}
void insertatTail(node* &head,int val){
    node*n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void display(node*head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<endl;
    
}
void deleteion(node* &head,int val){ // to delete the nth node
    node*temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}
void deleteathead(node* &head){
    node*todelete=head;
    head=head->next;
    delete todelete;
}
/*bool search(node*head,int key){
    node*temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}*/
int main(){
    node*head=NULL;
    insertatTail(head,1);
    insertatTail(head,2);
    insertatTail(head,3);
    display(head);
    insertathead(head,4);
    display(head);
   deleteion(head,2);
   display(head);
   deleteion(head,3);
   display(head);
  // deleteathead(head);
   //display(head);
    //cout<<search(head,2)<<endl;
    
    
    
}