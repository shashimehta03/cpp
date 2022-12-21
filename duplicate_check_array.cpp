#include<iostream>
using namespace std;
int main(){
    int n,i,j,temp,num,num2;
    bool found=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
  /*   for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        cout<<arr[i];
    } */
    int a,b,ele;
    //to find duplicate
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]=arr[j]){
            //  cout<<"found"<<arr[j]<<endl;
              //found=1;
              ele=arr[i];
            // arr[i]=ele;
                 
                //return true;
            }
        }
    }
    cout<<endl;
    cout<<ele;
   // to sort
   
    //to find the seques
  /*  for(i=0;i<n;i++){
        arr[i]=num;
        arr[i+1]=num2;
        if(num+1!=num2){
           return num+1;
        }
        
    }  */
    
 // cout<<a<<endl;
    
   // cout<<b<<endl;
    
  for(i=0;i<n;i++){
      if(arr[i]==a+1)
      
  }
    
}#include<iostream>
using namespace std;
int main(){
    int n,i,j,temp,num,num2;
    bool found=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
  /*   for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        cout<<arr[i];
    } */
    int a,b,ele;
    //to find duplicate
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]=arr[j]){
            //  cout<<"found"<<arr[j]<<endl;
              //found=1;
              ele=arr[i];
            // arr[i]=ele;
                 
                //return true;
            }
        }
    }
    cout<<endl;
    cout<<ele;
   // to sort
   
    //to find the seques
  /*  for(i=0;i<n;i++){
        arr[i]=num;
        arr[i+1]=num2;
        if(num+1!=num2){
           return num+1;
        }
        
    }  */
    
 // cout<<a<<endl;
    
   // cout<<b<<endl;
    
  for(i=0;i<n;i++){
      if(arr[i]==a+1)
      
  }
    
}