#include<iostream>
// Birthday Party Hackerearth
using namespace std;
int main()
{
int T,N;
long M;
cin>>T;
while(T--)
{
    cin>>N>>M;
    if(M%N==0)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
}

return 0;
}