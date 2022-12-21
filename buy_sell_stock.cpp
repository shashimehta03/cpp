#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[10];
    int n,i,max=0,min=0,posmin;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
   /* for(i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
           // i=posmax
        }
        else{
            min=arr[i];
          //  i=posmin;
        }
        
    }*/
    min = *min_element(arr,arr+n); //*min_element(start,end);
   
     for(i=0;i<n;i++){
        if(arr[i]==min){
            posmin=i;
            
        }
    }
     cout<< min<<endl;
   //  cout<<posmin<<endl;
   
   max = *max_element(arr + posmin, arr + n); //   *max_element(start , end);
    cout<< max<<endl;
   
   
  //  cout<<min<<endl;
    
}