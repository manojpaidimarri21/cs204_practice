#include<bits/stdc++.h>
using namespace std;
#define forl(i,a,n) for(int i=a;i<n;i++)
int main()
{
    int n;
    cin>>n;
    char s[n];
    int count=0;
    forl(i,0,n)
    {
        cin>>s[i];
        if(i%2==1)
        {
            if(s[i-1]==s[i])
            {
                if(s[i]=='a')
                {
                    s[i]='b';
                }
                else s[i]='a';
                count++;
                
            }
        }
    }
    cout<<count<<endl;
    forl(i,0,n)
    {
        cout<<s[i];
    }
    
}
