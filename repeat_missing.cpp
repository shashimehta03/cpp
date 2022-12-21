#include<iostream>
using namespace std;
int main(){
    int n,i,j,temp;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int a,b;
    //to find duplicate
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]=arr[j]){
              //  cout<<"found"<<endl;
                a=arr[i];
                
                //return true;
            }
        }
    }
   // to sort
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    //to find the seques
    for(i=0;i<n;i++){
        if((arr[i]+1)=arr[i+1]){
           
        }
    } 
    
    cout<<a<<endl;
    
    cout<<b<<endl;
    
    
}