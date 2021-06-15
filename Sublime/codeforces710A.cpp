#include "bits/stdc++.h"
using namespace std;
#define ll unsigned long long int
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)

int main()
{
fast;
int t;cin>>t;
while(t--)
{
    ll n,m,x;
    cin>>n>>m>>x;
    ll find,col,row;
    if(x%n==0)
    {
      row=x/n;
      col=n;
      cout<<(col-1)*m+row<<"\n";
    }
    else if(x%n!=0)
    {
      row = x/n+1;
      find = (row-1)*n;
      col = x-find;
      col=col-1;
      ll ans = col*m+row;
      cout<<ans<<"\n";
    } 
  }  
   
    return 0;
}
