#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int i,j,k,temp;
   
    for(i=0;i<n;i++){
        cin>>arr[i];
        
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
   /* for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } */
    cin>>k;
    for(i=1;i<n;i++){
       if(i==k){
           cout<<arr[i-1]<<" ";
           break;
       }
    }
    
}