#include<iostream>
using namespace std;
void last_in(){
    {
        arr[i]=element;
        cout<<"The resultent when number is stored at last"<<endl;
        for(i=0;i<n+1;i++){
            cout<<arr[i]<<endl;
        }
    }
}
int main()
{
    int i,n,num,pos,array[10];
    cout<<"Enter the size of array";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>array[i];
    }
    cout<<"Enter the number to insert and position";
    cin>>num>>pos;
    for(i=n;i>=pos;i--)
    array[i+1]=array[i];
    array[pos]=num;
    n++;
    cout<<"Number after insertion"<<endl;
    for(i=0;i<n;i++){
        cout<<array[i]<<endl;
    }
    cout<<"Enter the position from which you wanna delete file";
    cin>>pos;
    for(i=pos;i<n;i++)
    array[i]=array[i+1];
    n--;
    for(i=0;i<n;i++)
    cout<<array[i]<<endl;
    
    return 0;
    
}