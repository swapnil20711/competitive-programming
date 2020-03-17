#include<iostream>
using namespace std;
int main()
{
string s;
int i;
getline(cin,s);
for(i=0;i<s.length();i++)
{
    if(s[i]>=97 && s[i]<=122 )
    {
        s[i]-=32;
    }
    else
    {
        s[i]+=32;
    }
    
}
for(i=0;i<s.length();i++)
{
    cout<<s[i];
}
return 0;
}