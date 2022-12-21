#include<iostream>
#include <stack>
using namespace std;
int main(){
    stack<int>mystack;
    mystack.push(5);
    mystack.push(3);
    mystack.push(9);
    mystack.push(8);
    while(!mystack.empty()){
        cout<<" "<<mystack.top();
        mystack.pop();
    }
    
}