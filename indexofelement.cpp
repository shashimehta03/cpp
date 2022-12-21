#include<iostream>
using namespace std;
int main(){
    int arr[10],i,n,a;
    cout<<"Enter the size of array";
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the number you are searching for";
    cin>>a;
    for(i=0;i<n;i++){
        if(arr[i]==a){
            cout<<"The position is"<<i<<endl;
        }
    }
    return 0;
    
}