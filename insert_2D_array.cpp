#include<iostream>
using namespace std;
int main(){
    int arr[10][10];
    int x,y,i,j,a;
    cout<<"Enter the size of array";
    cin>>x>>y;
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Enter the element to insert";
    cin>>a;
    for(i=x;i<a;i++){
        for(j=y;j<a;j++){
            cin>>arr[i][j];
        }

    }
    arr[i][j]=arr[i][j];

        for(i=0;i<x;i++){
        cout<<endl;
        for(j=0;j<y;j++){
            cout<<arr[i][j];
        }
    }
    return 0;
}