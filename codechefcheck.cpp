#include<iostream>
using namespace std;
int main(){
    char arr[100];
    int a,i,j;
    int sum=0,sub=0;
    cout<<"Enter the number of array";
    cin>>a;
    for(i=0;i<a;i++){
        cin>>arr[i];
        
    }
    for(i=0;i<a;i++){
        if(arr[i]=='START38'){
            sum=sum+1;
        }
        else if(arr[i]=='LTIME108'){
            sub=sub+1;
        }
    }
    cout<<sum<<sub;
    return 0;
}