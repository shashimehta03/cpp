#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"SIZE";
    cin>>a;
    int arr[a];
    cout<<"Element";
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    for(int i=0;i<a;i++){
        for(int j=i+1;j<a;j++){
            if(arr[i]>arr[j]){
                b=arr[i];
                arr[i]=arr[j];
                arr[j]=b;
            }
        }
    }
    cout<<"AFter sort";
    for(int i=0;i<a;i++){
        cout<<arr[i];
    }
    
}