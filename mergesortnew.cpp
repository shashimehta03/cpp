#include<iostream>
using namespace std;
void merge(int *a,int lb,int ub,int mid){
    int i,j,k,temp[ub-lb+1];
    i=lb;
    k=0;
    j=mid+1;
    while(i<=mid&&j<=ub){
        if(a[i]<a[j]){ //a[i]>a[j] for descending order
            temp[k]=a[i];
            k++;
            i++;
        }
        else{
            temp[k]=a[j];
            k++;
            j++;
        }
    }
    while(i<=mid){
        temp[k]=a[i];
        k++;
        i++;
    }
    while(j<=ub){
        temp[k]=a[j];
        k++;
        j++;
    }
    for(i=lb;i<=ub;i++)
    {
        a[i]=temp[i-lb];
    }
}
void mergesorts(int *a,int lb,int ub){
    int mid;
    if(lb<ub){
        mid=(lb+ub)/2;
        mergesorts(a,lb,mid);
        mergesorts(a,mid+1,ub);
      //  mergesorts=(a,low,mid);
       // mergesorts=(a,mid+1,high);
        merge(a,lb,ub,mid);

    }
}
int main(){
    int n,i,arr[10];
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    cout<<"Enter Element"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    mergesorts(arr,0,n-1);
    cout<<"Now the sorted array is"<<endl;
    for(i=0;i<n;i++){
        cout<<" "<<arr[i];
    }
    
}
