#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    ll int i=0,j,a=0,a1=0;
    j=s.find('^');
    //cout<<j;
    for(i=0;i<j;i++)
    {if(s[i]=='=')
    {
        continue;
    }
    else 
    {
        a+=(s[i]-'0')*(j-i);
    }

    }
    i++;
    //cout<<i<<"\n"
    for(i;s[i]!='\0';i++)
    {if(s[i]=='=')
    {
        continue;
    }
    else 
    {
       a1+=(s[i]-'0')*(i-j);
    }

    }
   
    if(a1-a==0)
    {
        cout<<"balance";
    }
    else if(a<a1)
    {
        cout<<"right";
    }
    else
    {
        cout<<"left";
    }

}