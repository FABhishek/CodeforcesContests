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


void solve(){
	// int n,l,r;cin>>n>>l>>r;
	// vector<int>v(n); for(auto &i:v)cin>>i; sort(all(v));
    
 //    // cout<<upper_bound(v.begin(), v.end(), 6) - v.begin()<<" ";
 //    int L=0,R=0;
 //    ll ans = 0;
 //    for (int i = 0; i < n; i++) {
 //        R = upper_bound(v.begin()+i+1, v.end(), r - v[i]) - v.begin();
 //        L = lower_bound(v.begin()+i+1, v.end(), l - v[i]) - v.begin();
       
 //        ans += (R-L);
 //    }
 //    cout << ans  << "\n";

	int n;cin>>n;
	int ans=0;
	for(int i=1;i<=9;i++){
		for(int j=1;j<=9;j++)
        ans+=(stoll(string(i,'0'+j))<=n)?1:0;
	}
	cout<<ans<<"\n";
   
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	clock_t t1=clock();
	int t;
	cin>>t;
	// t=1;
	while(t--){
		solve();
	}
	cerr<<"Time elapsed: "<<(double)(clock()-t1)/1000<<" s"<<endl;
}


