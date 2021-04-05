#include<bits/stdc++.h>
using namespace std;
#define ll long long 
//'q 9', 'r 5', 'b 3', 'n 3', 'p 3', 'k1

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll white=0,black=0;
    string v="QRBNPK";
    int arr[]={9,5,3,3,1,0};
    char x;
    for(int i=0;i<64;i++)
    {
        cin>>x;
        char s=toupper(x);
        if(x=='.')
        {
            continue;
        }
        else if(s==x)
        {  
            white+=arr[v.find(x)];
        }
        else
        black+=arr[v.find(s)];
    }
    if(white>black)
    {
        cout<<"White";
    }
    else if(black>white)
    {
        cout<<"Black";
    }
    else
    {
        cout<<"Draw";
    }
    


    }