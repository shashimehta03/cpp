#include<iostream>
using namespace std;
int main(){
    int arr[100],n,i,pos,element,count=0;
    cout<<"Enter the size of an array";
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to be insert";
    cin>>element;
    cout<<"Enter the position";
    cin>>pos;
    for(i=n;i>=pos;i--)
    arr[i]=arr[i-1];
    arr[i]=element;
    cout<<"The Resultent array is";
    for(i=0;i<n+1;i++)
    cout<<arr[i];
    return 0; 
    
}