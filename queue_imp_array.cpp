#include<iostream>
using namespace std;
int rear=-1,front=-1,i;
int queue[100],n=100;
void insert(){
    int val;
    if(rear==n-1){
        cout<<"Overflow"<<endl;
    }
    else{
        if(front==-1)
        front=0;
        cout<<"Enter element to insert"<<endl;
        cin>>val;
        rear++;
        queue[rear]=val;
        
    }
}
void de(){
    if(front==-1||front>rear){
        cout<<"queue underflow";
        //return ;
    }
    else{
        cout<<"element deleted"<<endl;
        front++;;
    }
}
void display(){
    if(front==-1)
    cout<<"queue is empty"<<endl;
    else{
        for(i=front;i<=rear;i++){
            cout<<queue[i]<<" ";
        }
    }
}
int main(){
    int ch;
    cout<<"1 Insertion "<<endl<<"2 Deletion"<<endl<<"3 display"<<endl;
    while(ch!=4){
        cout<<"Enter choice"<<endl;
        cin>>ch;
        switch(ch){
            case 1:insert();
            break;
            case 2:de();
            break;
            case 3:display();
            break;
        }
    }
}