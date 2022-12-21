#include<iostream>
using namespace std;
int main(){
    int a;
    int arr[10],i,j,n;
    cout<<"Size of array";
    cin>>a;
    for(i=0;i<a;i++){
        cin>>arr[i];
    }
     for(i=0;i<a;i++){
         for(j=i+1;j<a;j++){
             if(arr[i]>arr[j]){
                 n=arr[i];
                 arr[i]=arr[j];
                 arr[j]=n;
                 
             }
         }
     } 
     cout<<"After sorting";
     for(i=0;i<a;i++)
     cout<<arr[i];
     return 0;
    
    
}