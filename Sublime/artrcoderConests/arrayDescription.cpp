#include <bits/stdc++.h> 
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
// Policy based data structure 
template<class T> using oset=tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; 
#define ll long long int
#define pii pair<ll,ll>
#define rep(i,st,en) for(ll i=st;i<en;i++)
#define vi vector<ll>
#define vii vector<pii>
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define eb emplace_back
#define yes cout<<"YES"<<endl; return;
#define no cout<<"NO"<<endl; return;
#define flus fflush(stdout);
#define gin(x) cerr<<#x<<" : "<<x<<" ";
#define fin cerr<<endl;
#define F first
#define S second
#define np next_permutation
#define inf 1e18
#define mod 1000000007
#define N 200009
#define PI 3.14159265358979323846
#define minpq priority_queue <ll, vector<ll>, greater<ll>>
#define maxpq priority_queue<ll> 
void sout(){
	cout<<endl;
}
template <typename T,typename... Types>
void sout(T var1,Types... var2){
	cout<<var1<<" ";
	sout(var2...);
}

bool sortBySec(const pair<int,int> &a, const pair<int,int> &b)
 {
   return (a.second<b.second);
 }

// const int nx = 100

void solve(){
	int n,x;cin>>n>>x;
	
	int dp[n+2][x+2];
	memset(dp,0,sizeof(dp));

	vector<int>v(n+1);
	rep(i,1,n+1) cin>>v[i];
    
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=x;j++)
    	{
    		if(i==1)
    		{
    			if(v[i]==0||v[i]==j) dp[i][j]=1;
    			else dp[i][j]=0;
    		}
    		else
    		{
    			if(v[i]==0||v[i]==j)
    				dp[i][j] = ((dp[i-1][j]+dp[i-1][j+1])%mod+dp[i-1][j-1])%mod;
    			else dp[i][j]=0;
    		}
    	}
    }

    for(int i=1;i<5;i++){
    	for(int j=1;j<5;j++)
    		  cout<<dp[i][j]<<" ";
    	cout<<"\n";
    }

   int sum=0;
   for(int i=1;i<=x;i++)
    {
      sum = (sum+dp[n][i])%mod;	
    }
  
    cout<<sum;


}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	clock_t t1=clock();
	int t;
	// cin>>t;
	t=1;
	while(t--){
		solve();
	}
	cerr<<"Time elapsed: "<<(double)(clock()-t1)/1000<<" s"<<endl;
}


/*
for(int i=1;i<=n;i++)
{
	for(int j=1;j<=m;j++)
	{
	   if(i==1){
	      if(v[i]==0||v[i]==j) dp[i][j]=1;
	      else dp[i][j]=0;
	   }
	   else
	   {
	   	if(v[i]==0||v[i]==j);
	   	dp[i][j] = dp[i-1][j-1]+dp[i-1][j]+dp[i-1][j+1];
	   	else dp[i][j]=0;
	
	   }
	}
}
*/