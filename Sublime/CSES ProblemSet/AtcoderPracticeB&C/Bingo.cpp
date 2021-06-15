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
	int mat[3][3];
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			cin>>mat[i][j];

	int n;cin>>n;
	int num;
	for(int i=0;i<n;i++){
        cin>>num;
    for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(num==mat[i][j])
		       mat[i][j]=0;
		}
	  }
	}
   
  //  for(int i=0;i<3;i++){
		// for(int j=0;j<3;j++){
		// 	cout<<mat[i][j]<<" ";
		// }cout<<"\n";
	 // }
	int ans=0,ans2=0,ans3=0,ans4=0;
	 for(int i=0;i<3;i++){
		for(int j=0;j<3;j++)
		{
           if(i==j && mat[i][j]==0){
           	 ans++;
           }
           if(i==3-j-1 && mat[i][j]==0){
           	 ans4++;
           }
           if(mat[i][j]==0)
           	 ans2++;
          
           if(mat[j][i]==0)
           	 ans3++;
		}
		if(ans2<3)
		  ans2=0;
		if(ans3<3)
		  ans3=0;
	}
	// cout<<ans<<" "<<ans2<<" "<<ans3<<" "<<ans4;
	if (ans == 3 || ans2 >= 3 || ans3 >= 3 ||ans4==3){
		cout<<"Yes";
	    return;
	}
	else cout<<"No";
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


