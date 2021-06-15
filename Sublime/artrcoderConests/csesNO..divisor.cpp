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

const int nx = 1e6;
int lp[nx+1];
vector<int> pr;

void solve(){
	map<int,int>m;
	int n;cin>>n;
	while(n>1)
	{
		m[lp[n]]++;
		n/=lp[n];
	}
	int ans = 1; 
	for(auto i:m)
		ans*=(i.second+1);
	cout<<ans<<"\n"; 
   
	// for(auto i:m)
	// {
	// 	cout<<i.F<<" "<<i.S<<"\n";
	// } 
 }

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	clock_t t1=clock();

    for (int i=2; i<=nx; ++i) {
    if (lp[i] == 0) {
        lp[i] = i;
        pr.push_back (i);
    }
    for (int j=0; j<(int)pr.size() && pr[j]<=lp[i] && i*pr[j]<=nx; ++j)
        lp[i * pr[j]] = pr[j];
	}

	int t;
	cin>>t;
	while(t--){
		solve();
	}
	cerr<<"Time elapsed: "<<(double)(clock()-t1)/1000<<" s"<<endl;
}


/*
for(int i=2;i<nx;i++)
{if(!lp[i])
{
  lp[i]=i;
  v.pb(i);	
}
 for(int j=0;j<=(int)v.size() && v[j]<=lp[i] && i*v[j]<=nx;++j)
   lp[i*v[j]]=v[j];
}
*/