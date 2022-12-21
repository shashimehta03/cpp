#include<iostream>
using namespace std;
void pairs(int a){
    for(int i=0;i<a;i++){
    int n,arr[10];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count,maxi=0;
    for(int i=0;i<n;i++){
        count=1;
        for(int j=i+1;j<=n-1;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        maxi=max(count,maxi);
        
    }
    cout<<n-maxi<<endl;
    }
}
int main(){
    int test;
    cin>>test;
    pairs(test);
    
}