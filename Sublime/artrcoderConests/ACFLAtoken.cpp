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
	int n,m;cin>>n>>m;
	char arr[n][m];
	int row=0;
	int col=0;
	int flag=1;
	rep(i,0,n){rep(j,0,m)
		{
			cin>>arr[i][j];
            if((arr[i][j]=='W'||arr[i][j]=='R')&&flag)
            	row=i,col=j,flag=0;
		}
	}
  if(flag)
  {
  	rep(i,0,n){if(i%2)arr[i][0]='R';else arr[i][0]='W';}
  	rep(i,0,n){rep(j,1,m){if(arr[i][j-1]=='R')arr[i][j]='W'; else arr[i][j]='R';}}
  }
  else{ 
   for(int j=col;j<m;j++)
   	{if(arr[row][col]=='R'&&j==col&&arr[row][col+1]=='.'&&j!=m-1)
        arr[row][col+1]='W';
   	 else
   	 	if(arr[row][j-1]=='R'&&arr[row][j]=='.')
   	 		arr[row][j]='W';
   	 else if(arr[row][j-1]=='W'&&arr[row][j]=='.')
   	 	   arr[row][j]='R';
   	}
   	for(int j=col;j>=0;j--)
   	{if(arr[row][col]=='R'&&j==col&&arr[row][col-1]=='.'&&j!=0)
        arr[row][col-1]='W';
   	 else
   	 	if(arr[row][j+1]=='R'&&arr[row][j]=='.')
   	 		arr[row][j]='W';
   	 else if(arr[row][j+1]=='W'&&arr[row][j]=='.')
   	 	   arr[row][j]='R';
   	}
    for(int j=col;j>=0;j--)
   	{if(arr[row][col]=='W'&&j==col&&arr[row][col-1]=='.'&&j!=0)
        arr[row][col-1]='R';
   	 else
   	 	if(arr[row][j+1]=='W'&&arr[row][j]=='.')
   	 		arr[row][j]='R';
   	 else if(arr[row][j+1]=='R'&&arr[row][j]=='.')
   	 	   arr[row][j]='W';
   	}
    for(int j=col;j<m;j++)
   	{if(arr[row][col]=='W'&&j==col&&arr[row][col+1]=='.'&&j!=m-1)
        arr[row][col+1]='R';
   	 else
   	 	if(arr[row][j-1]=='W'&&arr[row][j]=='.')
   	 		arr[row][j]='R';
   	 else if(arr[row][j-1]=='R'&&arr[row][j]=='.')
   	 	   arr[row][j]='W';
    }
   int ind,ind2,flag2=0;
    
    rep(i,0,n){rep(j,0,m)
    	{
          if(arr[i][j]=='R'||arr[i][j]=='W'){
            ind=i,ind2=j;flag2=1;break;}
    	}
        if(flag2)
        	break;
    }
    // cout<<ind<<" "<<ind2;
    rep(i,ind,n)
    {
    	if(arr[ind][ind2]=='W'&&i==ind&&arr[ind+1][ind2]=='.')
          arr[ind+1][ind2]='R';
   	 else
   	 	if(arr[i-1][ind2]=='R'&&arr[i][ind2]=='.')
   	 		arr[i][ind2]='W';
   	 else if(arr[i-1][ind2]=='W'&&arr[i][ind2]=='.')
   	 	   arr[i][ind2]='R';
    }
    rep(i,ind,n)
    {
    	if(arr[ind][ind2]=='R'&&i==ind&&arr[ind+1][ind2]=='.')
          arr[ind+1][ind2]='W';
   	 else
   	 	if(arr[i-1][ind2]=='W'&&arr[i][ind2]=='.')
   	 		arr[i][ind2]='R';
   	 else if(arr[i-1][ind2]=='R'&&arr[i][ind2]=='.')
   	 	   arr[i][ind2]='W';
    }
    for(int i=ind;i>=0;i--)
    {
    	if(arr[ind][ind2]=='W'&&i==ind&&arr[ind-1][ind2]=='.')
          arr[ind-1][ind2]='R';
   	 else
   	 	if(arr[i+1][ind2]=='R'&&arr[i][ind2]=='.')
   	 		arr[i][ind2]='W';
   	 else if(arr[i+1][ind2]=='W'&&arr[i][ind2]=='.')
   	 	   arr[i][ind2]='R';
    }
    for(int i=ind;i>=0;i--)
    {
    	if(arr[ind][ind2]=='R'&&i==ind&&arr[ind-1][ind2]=='.')
          arr[ind-1][ind2]='W';
   	 else
   	 	if(arr[i+1][ind2]=='W'&&arr[i][ind2]=='.')
   	 		arr[i][ind2]='R';
   	 else if(arr[i+1][ind2]=='R'&&arr[i][ind2]=='.')
   	 	   arr[i][ind2]='W';
    }

    rep(i,0,n)
    {
    	rep(j,0,m-1)
    	{
    		if(arr[i][j]=='R'&&arr[i][j+1]=='.')
    			arr[i][j+1]='W';
    		else if(arr[i][j]=='W'&&arr[i][j+1]=='.')
    			arr[i][j+1]='R';
    	}
    }
    
	rep(i,0,n)
	{rep(j,0,m)
		{if((arr[i][j]==arr[i][j-1]&&j!=0)||(arr[i-1][j]==arr[i][j]&&i!=0)){
			cout<<"NO\n";return;}
		}
		}
	}
	cout<<"YES\n";
	rep(i,0,n){rep(j,0,m){cout<<arr[i][j];}cout<<"\n";}
    
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


