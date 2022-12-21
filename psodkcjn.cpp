#include<iostream>
using namespace std;
int main(){
    int i, arr[100],num,first,last,mid;
    cout<<"Enter the size of array";
    cin>>num;
    for(i=0;i<num;i++){
        cin>>arr[i];
    }
    mid=0+num/2;
    num=last;
    first=0;
    while(first<=last){
         if(arr[mid]<num)
            first = mid+1;
        else if(arr[mid]==num)
        {
            cout<<"\nThe number, "<<num<<" found at Position "<<mid+1;
            break;
        }
        else
            last = mid-1;
        mid = (first+last)/2;
    }
    if(first>last)
        cout<<"\nThe number "<<num<<" is not found in given Array";
    cout<<endl;
    return 0;
    
    
}