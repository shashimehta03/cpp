#include<iostream>
using namespace std;
int main(){
    int arr[30];
    int n,i,element,preferance,pos;
    cout<<"Enter the length of an array";
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the elemnt to inset";
    cin>>element;
    cout<<"Press 1 to insert in last else 2";
    cin>>preferance;
    if(preferance==1){
        arr[i]=element;
        cout<<"The resultent when number is stored at last"<<endl;
        for(i=0;i<n+1;i++){
            cout<<arr[i]<<endl;
        }
    }
    else if(preferance==2){
        cout<<"Enter the position to insert";
        cin>>pos;
        for(i=n;i>=pos;i--)
            arr[i]=arr[i-1];
            arr[i]=element;
            cout<<"The resultent when number is stored at specific point"<<endl;
            for(i=0;i<n+1;i++)
            cout<<arr[i]<<endl;
        
    }

}
    

