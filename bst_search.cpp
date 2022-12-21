#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *left ,*right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
        
    }
};
Node* insertBST(Node* root, int val){
    if(root==NULL){
        return root;
    }
    if(val<root->data){
        root->left=insertBST(root->left,val);
    }
    else{
        root->right=insertBST(root->right,val);
    }
    return root;
}
/*void inorder(Node  *root){
    if(root==NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}*/
Node* searchInBST(Node*root,int key){
    if(root->data==key){
        return root;
    }
    //data>key
    if(root->data>key){
        return searchInBST(root->left,key);
    }
    //data<key
    else{
        return searchInBST(root->right,key);
    }
}
int main(){
    Node* root=NULL;
    root=insertBST(root,5);
    insertBST(root,1);
    insertBST(root,3);
    insertBST(root,4);
    insertBST(root,2);
    insertBST(root,7);
    searchInBST(root ,4);
    
   // inorder(root);
   // cout<<endl;
}