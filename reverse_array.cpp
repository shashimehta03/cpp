#include<iostream>
using namespace std;
int main(){
    int arr[10];
    int i,j,n,temp=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
   /* cout<<"before reverse";
    for(i=0;i<n;i++){
        cout<<arr[i];
    }
    for(i=n;i>0;i--){
        temp=arr[i];
        arr[i]=arr[j];
        temp=arr[j];
    }*/
    for(i=0;i<n;i++){
        arr[i]=arr[j];
    }
    cout<<"After reverse";
    for(i=0;i<n;i++){
        cout<<arr[j];
    }
    
}