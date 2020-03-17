#include<iostream>
using namespace std;
int main()
{
 int l,r,k,i,count=0;
 cin>>l>>r;
 cin>>k;
 for(i=l;i<=r;i++)
 {
     if(i%k==0)
     {
         count++;
     }
 }
 cout<<count;
return 0;
}