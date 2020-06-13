#include<iostream>
using namespace std;
int main()
{
    int n,i,key,cnt=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>key;
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            cnt++;
        }
    }
    cout<<key<<" occurs "<<cnt<<" times in the array ";

return 0;
}