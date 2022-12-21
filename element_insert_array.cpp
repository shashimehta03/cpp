#include<iostream>
using namespace std;
int main(){
    int arr[100],position,c,n,value;
    cout<<"Enter the length of array";
    cin>>n;
    cout<<"Enter the element of array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the location where you want to insert";
    cin>>position;
    cout<<"Enter the value";
    cin>>value;
    for(int i=n-1;i>=position-1;c--){
        arr[i+1]=arr[i];
        arr[position-1]=value;
    }
    cout<<"The result is";
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}