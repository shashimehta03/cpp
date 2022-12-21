#include<iostream>
using namespace std;
void factor(){
    int a;
    int sum=1;
    cin>>a;
    for(int i=1;i<=a;i++){
        sum=sum*i;
    }
    cout<<sum;
}
int main(){
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        factor();
        cout<<endl;
    }
    return 0;
}