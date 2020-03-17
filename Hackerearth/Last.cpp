#include<bits/stdc++.h>
// To find index of 1
using namespace std;

int main()
{   int T,index;
    string st;
    cin>>T;
    while(T--)
    {   index=-1;
        cin>>st;
        for(int i=0;i<st.size();i++)
            if(st[i]=='1')
                index=i;
        cout<<index<<endl;
    }
    
}