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

const int nx = 1001;
int dp[nx][nx];

void solve(){
	int n;cin>>n;
	bool arr[n+1][n+1];

	rep(i,1,n+1){
	 rep(j,1,n+1){
	 	char ch;cin>>ch;
	 	(ch=='.')? arr[i][j]=1:arr[i][j]=0;}
       }
       dp[n][n]=1;

    for(int i=n;i>=1;i--)
    {
    	for(int j=(i==n)?n-1:n;j>=1;j--)
    	{
    		dp[i][j] = (((j==n)?0:dp[i][j+1])+((i==n)?0:dp[i+1][j]))%mod;
    	 	if(!arr[i][j]) dp[i][j]=0;
        }
    }
    
    if (!arr[n][n])
    	cout<<0;
    else 
      cout<<dp[1][1];
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


