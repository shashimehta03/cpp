#include<iostream>
using namespace std;
int main(){
    int n,i,max,min;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
     for(i=1;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
     for(i=1;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    cout<<"largest number is"<<max;
    cout<<endl;
    cout<<"minimum number is"<<min;
   
    
}