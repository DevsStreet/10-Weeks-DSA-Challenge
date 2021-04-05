#include<bits/stdc++.h>
using namespace std;
//#define ll long long 
double c;
bool good(double x)
{double ans=x*x+sqrt(x);
//cout<<ans<<" ";
return ans-c<=0;
    
}




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>c;
    //cout<<c;
    double  l=0,r=1e8;
    for(int i=0;i<100;i++)
    {   setprecision(20);
        double mid=(double)(l+r)/2;
        //cout<<mid<<" ";
        if(good(mid))
        {
            l=mid;
        }
        else
        {r=mid;}
    }
   cout<<setprecision(20)<<l;

    

}