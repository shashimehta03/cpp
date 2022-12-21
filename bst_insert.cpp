#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *left , *right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
        
    }
};
void insert(struct Node *root ,int val){
    struct Node *prev=NULL;
    while(root!=NULL){
        prev=root;
        if(val==root->data){
            cout<<"Cannot insert .... already Inerted";
            return ;
        }
        else if(val<root->data){
            root=root->left;
        }
        else{
            root=root->right;
        }
        
    }
    struct Node* new = createNode(val){
        if(val<prev->data){
            prev->left=new;
        }
        else{
            prev->right=new;
        }
   }
}
struct *node createNode(int data){
    struct *node=n;
    n=(struct node*) malloc(sizeof(struct Node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
    
}
void inorder(Node *root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
    
}
int main(){
    Node* root=NULL;
    root=insert(root,5);
    insert(root,1);
    insert(root,3);
    insert(root,4);
    insert(root,2);
    insert(root,7);
    
    inorder(root);
    cout<<endl;
    
}











