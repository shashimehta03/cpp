#include<iostream>
using namespace std;
void linear()
{
    int arr[10],num,i,n,found=0,pos=-1;
    cout<<"Enter the number of element";
    cin>>n;
    cout<<"Enter the elements";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the number you want to search";
    cin>>num;
    for(i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            found=1;
            pos=i;
            cout<<"we found the  number  "<<num<<"  position   "<<i<<endl;
            break;
        }
        
    }
}
void binary(){
    int arr[10],num,i,n,beg,end,mid,found=0;
    cout<<"Enter the number of elements";
    cin>>n;
    cout<<"Enter the elements";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the elements you want to search"<<endl;
    cin>>num;
    beg=0,end=n-1;
    while(beg<=end)
    {
        mid=(beg+end)/2;
        if(arr[mid]==num)
        {
            cout<<"The number is present in"<<num<<"position"<<mid<<endl;
            found =1;
            break;
        }
        if(arr[mid]>num)
            end=mid-1;
            
            else if (arr[mid]<num)
            beg=mid+1;
        
    }
    if(beg>end&&found==0)
    cout<<"the number you are searching from doesnot exist";
 
}
int main(){
    int n;
    cout<<" 1 for Linear search \n 2 for binary search"<<endl;
    cin>>n;
    if(n==1){
        linear();
    }
    else if(n==2){
        binary();
    }
    else{
        cout<<"Service Error";
    }
    cout<<"Shashi Mehta_21BCS7093";
    
    return 0;
}
