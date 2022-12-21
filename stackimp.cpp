#include<iostream>
using namespace std;
    int stack[100];
    int n,i,top,x;
    void push();
    void pop();
    void display();
    void show_top();
    bool isempty();
int main(){
    int ch;
    cout<<"Enter the size of Stack"<<endl;
    cin>>n;
    i=1;
    top=-1;
    while(i){
        cout<<"Enter your Choice"<<endl;
        cout<<"\n 1.push\n 2.pop\n 3.display\n 4.show top element \n 5.exit\n";
        cin>>ch;
        switch(ch){
            case 1:push();
            break;
            case 2:pop();
            break;
            case 3:display();
            break;
            case 4:show_top();
            break;
            case 5:i=0;
            break;
            default:
            cout<<"Wrong input"<<endl;
            break;
        }
        
    }
    return 0;
    
}
void push(){
    if(top>=n-1){
        cout<<"Stack is overflow"<<endl;
    }
    else{
        cout<<"Enter the element to add"<<endl;
        cin>>x;
        top=top+1;
        stack[top]=x;
    }
}
void pop(){
    if(top<=-1){
        cout<<"Stack is underflow"<<endl;
    }
    else{
        cout<<"element"<<stack[top]<<"Got deleted"<<endl;
        top--;
    }
}
void display(){
    if(top>=0){
        cout<<"element in the stack are"<<endl;
        for(i=top;i>=0;i--)
        cout<<stack[i]<<"  ";
    }
    else{
        cout<<"Stack is empty"<<endl;
    }
}
void show_top(){
    if(isempty())
    cout<<"Stack is empyty"<<endl;
    else
    cout<<"element at top"<<stack[top]<<endl;
}
bool isempty(){
    if(top==-1)
    return true;
    else
    return false;
}





































