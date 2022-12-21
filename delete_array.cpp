#include<iostream>
using namespace std;
int main()
{
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