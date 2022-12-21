#include<iostream>
using namespace std;
void insert_specific(){
    
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
    cout<<"The Resultent array is"<<endl;
    for(i=0;i<n+1;i++)
    cout<<arr[i];

}
void insert_last(){
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
        cout<<arr[i];
    }
}
void delete_array(){
    int i,n,pos,array[100];
    cout<<"Enter the size of array";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>array[i];
        
    }
    cout<<"Enter the position from which you wanna delete file";
    cin>>pos;
    for(i=pos;i<n;i++)
    array[i]=array[i+1];
    n--;
    for(i=0;i<n;i++)
    cout<<array[i]<<endl;
   
}
void linear(){
    
    int arr[10],i,n,a;
    cout<<"Enter the size of array";
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the number you are searching for";
    cin>>a;
    for(i=0;i<n;i++){
        if(arr[i]==a){
            cout<<"The position is"<<i<<endl;
        }
    }    
    

}
int main(){
    int n;
    cout<<"Enter the choice\n 1.for inset at specific place\n 2.for Insert at last position\n 3.delete an element from an array\n 4.linear search\n";
    cin>>n;
    switch(n){
        case 1:
        insert_specific();
        break;
        case 2:
        insert_last();
        break;
        case 3:
        delete_array();
        break;
        case 4:
        linear();
        break;
    }
}
