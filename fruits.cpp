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


// template <typename T1, typename T2>
// struct more_second {
//     typedef pair<T1, T2> type;
//     bool operator ()(type const& a, type const& b) const {
//         return a.second > b.second;
//     }
// };
bool more_second(pair<string, int>& a,
         pair<string, int>& b)
{
    return a.second > b.second;
}

void solve(){
	int n,k;cin>>n>>k;
	vector<int>v(n);
	for(auto &i:v) cin>>i;
    map<string,int>m;
    for(int i=0;i<k;i++){
    	string s;cin>>s;
        m[s]++;
    }
  vector<pair<string, int> > vec(m.begin(), m.end());
  sort(vec.begin(), vec.end(), more_second);

    int sum_min=0;
    sort(all(v));
    for(int i=0;i<vec.size();i++)
         sum_min += vec[i].second*v[i];

    cout<<sum_min<<" ";
    reverse(all(v));
    int sum_max=0;
    for(int i=0;i<vec.size();i++)
         sum_max += vec[i].second*v[i];
     cout<<sum_max;
     cout<<"\n";

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


