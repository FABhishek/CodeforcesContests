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




void solve(){
	int n,m;cin>>n>>m;
	int s[100]={0};
	rep(i,0,n){int a,b;cin>>a>>b;s[i]=a*60+b;}
	
    // rep(i,0,n)cout<<s[i]<<" ";
    if(s[0]>m){
      cout<<0<<" "<<0;
      return;}

    int ans=0;
    int last=0;
    int rem=0;
    bool f=false;
	rep(i,1,n) 
	{
		if(s[i]-s[i-1]>2*m+1){
		   // cout<<i<<" ";
		   rem = s[i-1]%60;
		   last = s[i-1]/60;
		   f = true;
		   break;
		}
	}
	if(f){
	if(rem+m+1>=60)
	  cout<<last+((rem+m+1)/60)<<" "<<(rem+m+1)%60;
	else
		cout<<last<<" "<<(rem+m+1)%60;
   }
	
	else{
		int newr = s[n-1]%60;
		if(m+newr+1>=60){
			int z=newr+m+1;
			// cout<<z;
	     	cout<<s[n-1]/60+(z/60)<<" ";}
	    else
	     	cout<<s[n-1]/60<<" ";
	    cout<<(newr+m+1)%60;
		
	   }
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


