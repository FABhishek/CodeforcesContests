#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef double db;

#define mp make_pair
#define pb push_back
#define pt(i) printf("%lld\n",(ll)i)
#define mp make_pair
#define ff first
#define ss second
#define pi acos(-1.0)
#define CLR(a)          memset(a,0,sizeof(a))
#define SET(a)          memset(a,-1,sizeof(a))

ll in() { ll a;scanf("%lld",&a); return a;}
db din(){ db a;scanf("%lf",&a); return a; }
ll bigmod(ll b, ll p,ll md){if(p==0) return 1;if(p%2==1){ return ((b%md)*bigmod(b,p-1,md))%md;} else {ll y=bigmod(b,p/2,md);return (y*y)%md;}}
ll gcd(ll a,ll b){ if(b==0) return a; else return gcd(b,a%b);}

long long getRandom(long long a,long long b){
    long long ret = (long long)rand()*(long long)rand();
    ret %= (b - a + 1);
    ret += a;
    return ret;
}

int main()
{
    ll n=in();
    ll ar[n+5];
    for(int i=0;i<n;i++)
    ar[i]=in();
    ll ans=LLONG_MAX;
    sort(ar,ar+n);
    for(ll i=1;i<=100000;i++)
    {
        ll cnt=0,val=1;
        for(int j=0;j<n;j++)
        {
            cnt+=abs(val-ar[j]);
            if((db)val*(db)i>1e18)
            {
                cnt=LLONG_MAX;
                break;
            }
            val*=i;
        }
        if(cnt>ans)
        break;
        ans=cnt;
    }
    pt(ans);
}

