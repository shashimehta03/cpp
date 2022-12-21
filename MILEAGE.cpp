#include<iostream>
using namespace std;
void milege(){
    int n,x,y,a,b;
    cin>>n>>x>>y>>a>>b;
    float z=n/a;
    float r=n/b;
    if((z*x)<(r*y)){
        cout<<"PETROL"<<endl;
    }
    else if((r*y)<(z*x)){
        cout<<"DIESEL"<<endl;
    }
    else
    cout<<"ANY"<<endl;
}
int main(){
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        milege();
    }
}