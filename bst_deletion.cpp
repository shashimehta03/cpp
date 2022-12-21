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
void inorder(Node  *root){
    if(root==NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
Node* deleteInBST(Node* root,int key){
    if(key<root->data){
        root->left=deleteInBST(root->left,key);
        
    }
    else if(key>root->data){
        root->right=deleteInBST(root->right,key);
    }
    else{
        if(root->left==NULL){
            Node* temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL){
            node* temp=root->left;
            free(root);
            return temp;
        }
        node* temp=inorderSucc(root->right){
            root->data=temp->data;
            root->right=deleteInBST(root->right,temp->key);
            
        }
        return root;
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
    
    inorder(root);
    cout<<endl;
}