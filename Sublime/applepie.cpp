#include <bits/stdc++.h> 
using namespace std;
#define ll long long int
 
 
ll calculate(ll *arr,ll currsum,ll sum, ll i)
{
    if(i==0)
        return abs((sum-currsum)-currsum);
        
    return min(calculate(arr,currsum+arr[i],sum,i-1),calculate(arr,currsum,sum,i-1));
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t t1=clock();
 
    ll n;
    cin>>n;
    ll *arr=new ll[n];
    ll sum=0;
    for(ll i=0;i<n;i++)
        {cin>>arr[i];
         sum+=arr[i];
        }
    cout<<calculate(arr,0,sum, n-1);
    return 0;
 
    cerr<<"Time elapsed: "<<(double)(clock()-t1)/1000<<" s"<<endl;
}
 
