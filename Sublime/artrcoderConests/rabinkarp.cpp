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
// #define mod 1000000007
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

ll mul(ll a, ll b, ll m)
{   ll res= 0;
    while(b){if(b&1) res = (res+a)%m;
             a = (2*a)%m;
             b>>=1;
     }
     return res;
}

ll pow(ll a, ll b, ll m)
{
    a%=m;
    ll res =1;
    while(b)
    {
        if(b&1) res = mul(res,a,m);
        b>>=1;
        a = mul(a,a,m);
    }
    return res;
}

bool check_comp(ll n, ll a, ll d, ll s)
{
    ll x = pow(a,d,n);
    if(x==1||x==n-1)
        return false;
    for(int r=1;r<s;r++)
    {
        x=mul(x,x,n);
        if(x==n-1)
            return false;
    }
    return true;
}

bool rabin_karp(ll n)
{
    if(n<2) return false;

    ll d = n-1;
    int s=0;

    while((d&1)!=1)
    {
        d>>=1; s++;
    }
    for(int a : {2,3,5,7,11,13,17,19,23,29,31,37})
    {
        if(a==n)
             return true;
        if(check_comp(n,a,d,s))
            return false;
    }
    return true;
}
void solve(){
    ll n;
    cin>>n;
	if(rabin_karp(n))
        cout<<"YES\n";
    else
        cout<<"NO\n";
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


