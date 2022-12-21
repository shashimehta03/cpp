#include<iostream>
using namespace std;
void run(int a){
    for(int i=0;i<a;i++){
        int n,k,many=0,arr[10];
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
    int no=0;
    for(int j=0;j<k;j++){
        if(i+j<n)
        no+=arr[i+j];
    }
    if(no>many)
    many=no;
    }
    cout<<many<<endl;
    }
    
}
int main(){
    int test;
    cin>>test;
    run(test);
}