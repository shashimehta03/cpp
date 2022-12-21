#include<iostream>  
using namespace std;  
int main ()  
{    
    int myarray[10] = { 34,56,4,10,77,51,93,30,5,52};   
       
    cout<<"\nInput list is ";
    for(int i=0;i<10;i++)  
    {  
        cout <<myarray[i]<<" ";  
    }    
    for(int k=1; k<10; k++)   
    {  
        int temp = myarray[k];  
        int j= k-1;  
        while(j>=0 && temp <= myarray[j])  
        {  
            myarray[j+1] = myarray[j];   
            j = j-1;  
        }  
        myarray[j+1] = temp;  
    }  
    cout<<"\nSorted list is \n";
    for(int i=0;i<10;i++)  
    {  
        cout <<myarray[i]<<" ";  
    }  
}