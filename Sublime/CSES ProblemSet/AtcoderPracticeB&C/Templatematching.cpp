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
	char arr[n][n];
	char arr2[m][m];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>arr[i][j];
    for(int i=0;i<m;i++)
		for(int j=0;j<m;j++)
			cin>>arr2[i][j];
        
    int rows = m,cols=m;
    int c=0;
    vector<char>v;
    vector<vector<char>>vec;
	
    int s=0,t=0;
    int p=(n*n)/2+1;
    int flag=1;
    while(p--){
	for(int i=s;i<rows;i++)
	{
		for(int j=t;j<cols;j++)
		{
            v.push_back(arr[i][j]);
		}
		vec.push_back(v);
		v.clear();
    } 
    if(rows!=n && cols==n)
         	{s++;
         	 t=0;
         	 cols=m;
         	 flag=0;
             rows++;}
    if(cols!=n && flag){
         	t++;
         	cols++;}
    flag=1;
         
         for(int i=0;i<vec.size();i++)
         {
         	for(int j=0;j<vec[i].size();j++)
         	{
         		if(vec[i][j]==arr2[i][j])
         			c++;
         	}
         }
         if(c == m*m){
         	cout<<"Yes";
            return;}
         c=0;
         vec.clear();
	}

    cout<<"No";
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


