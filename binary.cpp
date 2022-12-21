#include<iostream>
using namespace std;
int binary search(int arr[],int left,int right,int x){
    while(left<=right)
    {
        int mid=left+(right-left)/2;
        if(arr[mid]==x)
        {
            return mid;
        }
        else if(arr[mid]<x){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
}
int main(){
    int num;
    int arr[10];
    int ouput;
    cout<<"enter the 10 integer";
    for(inti=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"search";
    cin>>num;
    output=binary search(arr,0,9,num)
    if(output=1){
        cout<<"no match found";
    }
    else{
        cout<<"match found"<<output<<endl;
        
    }
    return 0;
}