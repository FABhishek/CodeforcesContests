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
    char arr[n][m];
    for(int i=0;i<n;i++)
    	for(int j=0;j<m;j++)
    		cin>>arr[i][j];

    vector<vector<char>> temp;
    vector<char> vec;
    int flag1=0,flag2=0;
    for(int i=0;i<n;i++){
    	for(int j=0;j<m;j++)
    	{
    		if(arr[i][j] == '#')
    		{
              flag1 = 1;
              break;
    		}
    		else flag1=0;
    	}
    		if(flag1) {
    			for(int j=0;j<m;j++){
    			 vec.push_back(arr[i][j]);
    		}
    		 temp.push_back(vec);
    		while (!vec.empty())
             {
             vec.pop_back();
             }

    	}
    }
   vector<vector<char>>temp2;
   for(int i=0;i<temp[0].size();i++)
   {
   	for(int j=0;j<temp.size();j++)
   	{
          if(temp[j][i] == '#')
    		{
              flag2 = 1;
              break;
    		}
    		else flag2 = 0;
   	}
   	if(flag2){
    		for(int j=0;j<temp.size();j++)
    			  vec.push_back(temp[j][i]);
            
            temp2.push_back(vec);
    		while (!vec.empty())
             {
             vec.pop_back();
             }
 
   }
}
for(int i=0;i<temp2[0].size();i++)
   {
   	for(int j=0;j<temp2.size();j++)
   	{
         cout<<temp2[j][i];
   	}
   	cout<<"\n";
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


