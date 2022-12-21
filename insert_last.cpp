#include<iostream>
using namespace std;
int main(){
    int arr[30],i,n,re_Enter;
    cout<<"Enter the Size of array";
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the elemnt to insert";
    cin>>re_Enter;
    arr[i]=re_Enter;
    cout<<"The new values after installtion";
    for(i=0;i<(n+1);i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}