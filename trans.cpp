#include<iostream>
using namespace std;
int main(){
    int arr[10],size;
    cout<<"Enter the Size of array";
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        cout<<"The element at position "<<i<<"elememt  "<<arr[i]<<endl;
    }
    return 0;
}