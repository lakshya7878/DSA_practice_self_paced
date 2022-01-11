//#pragma GCC optimize("Ofast")
//#pragma GCC 
//target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
//#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pl;
typedef pair<double,double> pdd;
typedef vector<ll> vl;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
typedef vector<vector<ll> > vvl;
typedef vector<vector<pl> > vvpl;
typedef vector<pl> vpl;
typedef vector<pii> vpi;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define nline "\n"
#define si(x) scanf("%d",&x)
#define sl(x) scanf("%lld",&x)
#define ss(s) scanf("%s",s)
#define pi(x) printf("%d\n",x)
#define pl(x) printf("%lld\n",x)
#define ps(s) printf("%s\n",s)
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
vector<ll> vec;

 ll n,h;
bool suff(ll k1){
    if(n==1){
        if(k1>=h) return true;
        else return false;
    }
    ll sum = 0;
    
    for(int i=0;i<n-1;i++){
        sum = sum + min(vec[i+1]-vec[i],k1);
    }
    sum = sum +k1;

    // cout<<sum<<" sum"<<k1<<" "<<endl;
    if(sum>=h) return true;
    else return false;
}


void solve(){
    
    cin>>n>>h;
    ll a ;
    forn(i,n){
        
        cin>>a;
        vec.push_back(a);
    }

    ll lo = 1;
    ll hi = 1e18;
    ll mid;
    
    while(lo<hi){
        
        mid = lo + (hi-lo)/2;
        if(suff(mid)){
            hi = mid;
        }
        else{
            lo = mid +1;
        }
    }
    cout<<hi<<endl;
    vec.clear();
}
int main()
{
    fast_cin();
    ll t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}