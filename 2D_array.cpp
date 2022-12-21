#include<iostream>
using namespace std;
int main(){
    int arr[10][10];
    int x,y,i,j;
    cout<<"Enter the value x any y";
    cin>>x>>y;
    for(i=0;i<x;i++){
      //  cin>>arr[i];
        for(j=0;j<y;j++)
        cin>>arr[i][j];
    }
    for(i=0;i<x;i++){
        cout<<endl;
        for(j=0;j<y;j++){
            cout<<arr[i][j];
        }
    }
}