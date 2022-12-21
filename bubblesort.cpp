#include<iostream>
using namespace std;
int main ()
{
   int i,n, j,temp,pass=0;
   int a[10];
   cout<<"Enter the size of array"<<endl;
   cin>>n;
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
   cout <<"Input list ...\n";
   for(i = 0; i<n; i++) {
      cout <<a[i]<<"\t";
   }
cout<<endl;
for(i = 0; i<n; i++) {
   for(j = i+1; j<n; j++)
   {
      if(a[j] < a[i]) {  //if(arr[j]>arr[i]) for decending order
         temp = a[i];
         a[i] = a[j];
         a[j] = temp;
      }
   }
pass++;
}
cout <<"Sorted Element List ...\n";
for(i = 0; i<n; i++) {
   cout <<a[i]<<"\t";
}
cout<<"\nNumber of passes taken to sort the list:"<<pass<<endl;
return 0;
}