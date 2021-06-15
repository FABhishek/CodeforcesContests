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

	ll n;
	cout<<"enter the no. of gifts\n";
	cin>>n;
	ll *arr=new ll[n];
	cout<<"enter the size of gifts\n";
	ll sum=0;
	for(ll i=0;i<n;i++)
		{cin>>arr[i];
		 sum+=arr[i];
		}
    cout<<calculate(arr,0,sum, n-1);
    return 0;

}


