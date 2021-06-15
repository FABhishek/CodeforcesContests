#include <bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
long long int arr[N];

int main()
{   
	int n;cin>>n;
	int t;cin>>t; 
	while(t--){    
	int a,b,k;
	cin>>a>>b>>k;

	arr[a]+=k;
	arr[b+1]-=k;

	}
	for(int i=1;i<=n;i++)
	  arr[i] += arr[i-1];
	  
	long long int ans = -1;
	for(int i=0;i<=n;i++)
	{
	    ans = max(arr[i],ans);
	}
	cout<<ans;

	return 0;
}
