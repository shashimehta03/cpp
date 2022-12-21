#include <iostream>
#include<math.h>
using namespace std;

int main() {
int pa,pb,qa,qb;
int a,b;
int test;
for(int i=1;i<=test;i++)
{
    cin>>pa>>pb>>qa>>qb;
    a=max(pa,pb);
    b=max(qa,qb);
    //cout<<a<<b;
    if(a>b)
    {
        cout<<"p";
        
    }
    else if(a<b)
{
    cout<<"q";
}
else if(a==b)
{
    cout<<"tie";
}
}
	return 0;
}
