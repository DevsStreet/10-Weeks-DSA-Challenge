#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    set<double>s;
    int n,a,b,c,d;
    cin>>n>>a>>b;
    while(n--)
    {   cin>>c>>d;
        s.insert((double)(a-c)/(b-d));
    }
    cout<<s.size();


    

}