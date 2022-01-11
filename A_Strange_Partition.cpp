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
#define ln "\n"
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
 

bool isPowerOfTwo(ll n){
if(n==0)
return false;
return (ceil(log2(n)) == floor(log2(n)));
}
 



void solve(){
    ll n,x;
    cin>>n>>x;
    ll arr[n];
    forn(i,n){
        cin>>arr[i];
    }
    ll ma =0;
    ll mi = 0;
    ll sum = 0;
    forn(i,n){
        sum = sum +arr[i];
        if(arr[i]%x==0){
            ma +=arr[i]/x;
            
        }
        else{
            
            ma +=(arr[i]/x)+1;
            
        }
    }
    if(sum%x==0){
        mi = mi+(sum/x);
    }
    else{
        mi += mi +  (sum/x)+1; 
    }
    cout<<mi<<" "<<ma<<ln;
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