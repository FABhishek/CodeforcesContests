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




int solve(){
	    int  n, r,ans = 0;
	    cin>>n;
	    int d1=20,d2=36,d3=51,d4=60;
	    
	     if(n<=4) {
    		if(n==1)
    		return d1;
    		else if(n==2)
    		return d2;
    		else if(n==3)
    		return d3;
    		else
		    return d4;
    	}
	    else {
		r = n%4;
		ans = d*(n/4)- 4*(n-4);
		if(r==1) 
			ans += a;
		else if(r==2) 
			ans += b;
		else if(r==3)
			ans += c;
		
		} 
      return ans;

 }
  

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		cout<<solve()<<endl;
	}
}


