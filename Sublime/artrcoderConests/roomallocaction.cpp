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
	int n;cin>>n;
	vector<pair<int,int>>v;
	rep(i,0,n)
	{
		int a,b;cin>>a>>b;
		v.push_back({a,b});
	}
	sort(all(v));
    set<array<int,2>>s;
    vector<int>ans;
	ans.push_back(1);
	s.insert({1,v[0].S});
	int iter = 1;
	int flag=0;
	rep(i,1,n)
	{
	   flag=0;
       for(auto it=s.begin();it!=s.end();it++)
       {   
           if((*it)[1]>v[i].F)
           {
           	int val = (*it)[0];
           	s.erase(it);
           	s.insert({val,v[i].S});
           	ans.push_back(val);
           	flag=1;
           	break;
           }
       }

       if(!flag){
       	   ++iter;
           s.insert({iter,v[i].S});
           ans.push_back(iter);
         }
	}
	int sz = s.size(); 
	cout<<s.size()<<"\n";

	for(auto i:ans)
		cout<<i<<" ";
	
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

