#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
    };
node * push(node*,node*);
node * pop(node*);
void show_stack(node*);
node *f,*l;
main()
{
    int i,ch;
    f=l=NULL;
    cout<<"\t 1 to push"<<endl;
    cout<<"\t 2 to pop"<<endl;
    cout<<"\t 3 to show stack"<<endl;
    cout<<"\t 0 to exit"<<endl;
    while(1)
    {
        cout<<"Enter your choice:";
        cin>>ch;
        switch(ch)
        {
        case 1:
            {
            if(f==NULL)
            l=f=push(f,l);
            else
            l=push(f,l);
            break;
            }
        case 2:
            {
            cout<<"popped:"<<pop(f)->data<<endl;
            break;
            }
 
        case 3:
            {
            show_stack(f);
            break;
            }
        case 0:
            break;
        default:
            cout<<"Please enter a proper choice"<<endl;break;
        }
        if(ch==0)
        break;
    }
}
node * push(node *f,node *l)
{
    node *n;
    n=new node;
    cout<<"Enter data:";
    cin>>n->data;
    n->next=NULL;
    if(f==NULL)
    {f=l=n;return f;}
    else
    {
        l->next=n;
        l=n;return l;
    }
 
}
void show_stack(node *f)
{
    cout<<"showing data"<<endl;
    node *guest=f;
    while(guest!=NULL)
    {
        cout<<"\t"<<guest->data<<endl;
        guest=guest->next;
    }
}
node * pop(node *f)
{
    node *guest,*lb;
    guest=lb=f;
    while(guest->next!=NULL)
    {
        lb=guest;
        guest=guest->next;
    }
    lb->next=NULL;
    l=lb;
    return guest;
}