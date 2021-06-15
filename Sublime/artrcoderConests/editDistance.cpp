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
const int nx = 5001;
int dp [nx][nx];

// int solve2(int i, int j, string &s1, string &s2)
// {
// 	if(i==s1.length() || j==s2.length()) 
// 		  return max(s2.length()-j,s1.length()-i);

//     if(dp[i][j]!=-1) return dp[i][j];
    
//     int ans;
//     if(s1[i]==s2[j])
//     	ans = solve2(i+1,j+1,s1,s2);
   
//     else{
// 	int op1 = 1+solve2(i,j+1,s1,s2);
//     int op2 = 1+solve2(i+1,j,s1,s2);
//     int op3 = 1+solve2(i+1,j+1,s1,s2);
//     ans = min(op1,min(op2,op3));}

//     return dp[i][j] = ans;
// }

void solve(){
	string n,m;cin>>n>>m;
	// cout<<solve2(0,0,n,m);
	rep(i,0,n.length()+1) dp[i][0] = i;
	rep(i,0,m.length()+1) dp[0][i] = i;
	
	for(int i=1;i<=n.length();i++){
		for(int j=1;j<=m.length();j++){
			if(n[i-1]==m[j-1]) dp[i][j] = dp[i-1][j-1];
			else
				dp[i][j] = min({dp[i-1][j],dp[i-1][j-1],dp[i][j-1]})+1;
		}
	} 
	int i = n.length(), j=m.length();
	cout<<dp[i][j];
	cout<<"\n";
	for(int i=0;i<=5;i++){
		for(int j=0;j<=5;j++)
			cout<<dp[i][j]<<" ";
		cout<<endl;
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	clock_t t1=clock();
	// memset(dp,-1,sizeof(dp));
	int t;
	// cin>>t;
	t=1;
	while(t--){
		solve();
	}
	cerr<<"Time elapsed: "<<(double)(clock()-t1)/1000<<" s"<<endl;
}


