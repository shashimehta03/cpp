#include<iostream>
using namespace std;
struct node{
    int data;
    node*next;

};
class linked_list{
private:
node*head,*tail;
public:
linked_list(){
    head=NULL;
    tail=NULL;
}
void add_node(int n){
    node*temp=new node;
    temp->next=NULL;
    if(head==NULL){
        head=temp;
        tail=temp;
    }
    else{
        tail->next=temp;
        tail=tail->next;
    }
}
void display(){
    node*temp;
    temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
};
int main(){
    linked_list a;
    a.add_node(1);
    a.add_node(2);
    a.add_node(3);
    a.add_node(4);
    a.display();
    return 0;
}