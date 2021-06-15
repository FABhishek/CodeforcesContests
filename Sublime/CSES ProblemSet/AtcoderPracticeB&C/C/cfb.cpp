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

	//d-
	int n;cin>>n;
	map<int,int> freq;
	int pairs =0;
	for(int i=0;i<n;i++)
	{   int a;cin>>a;
		pairs += freq[a-i]++;
	}
	cout<<pairs<<"\n";

	//c-
	// int n;cin>>n;
	// if(n==2) {cout<<-1<<"\n"; return;}
	
	// int current =1;
	// for(int i=0;i<n;i++){
 //     for(int j=0;j<n;j++){

 //     	cout<<current<<(j<n-1?' ':'\n');
 //     	current += 2;

 //     	if(current > n*n)
 //     	current = 2;
 //     }
 // }
  
	//b-
	// int n;cin>>n;
	// int cnt=0;
	// for(int d=1;d<=2;d++)
	// 	for(int x=1;x<=9;x++)
	// 	if(stoi(string(d,'0'+x))<=n)
	// 		cnt++;
	// cout<<cnt<<"\n";
	
	//a-
	// string s = "DDBBCCCBBEZ"; 
	// string sorted = s;
	// sort(sorted.begin(),sorted.end());
 //    s.erase(unique(s.begin(),s.end()),s.end());
	// sorted.erase(unique(sorted.begin(),sorted.end()),sorted.end());
	// (sorted.length()==s.length())?cout<<"yes":cout<<"no";


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


