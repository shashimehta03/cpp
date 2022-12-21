#include<iostream>
using namespace std;
struct node{
    int data;
    struct node*link;

}
int main(){
    int position=2;
    del_pos(&head,position);
    ptr=head;
    while (ptr!=NULL)
    {
      cout<<ptr->data;
    }
    
}