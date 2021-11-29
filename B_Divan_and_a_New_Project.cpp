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
 bool cmp1(pair<ll,ll> a,pair<ll,ll> b){
     return a.first >b.first;
 }
 bool cmp2(pair<ll,ll> a,pair<ll,ll>b){
     return a.first<b.first;
 }

void solve(){
    ll n;
    cin>>n;
    vector<pair<ll,ll>> arr;
    forn(i,n){
        ll a;
        cin>>a;
        arr.push_back({a,i});
    }
    sort(arr.begin(),arr.end(),cmp1);
    vector<pair<ll,ll>> v;
    
    ll time = 0;
    ll count =1;
    int flag =0;
    for(auto it : arr){
        if(flag ==0){
            v.push_back({it.second,-count});
            time = time + 2*abs(-count)*(it.first);
            flag =1;
            continue;
        }
        else if( flag ==1){
            v.push_back({it.second,count});
            time = time + 2*abs(count)*(it.first);
            count++;
            flag =0;
            continue;
        }
        
    }
    sort(v.begin(),v.end(),cmp2);
    cout<<time<<endl;
    cout<<0<<" ";
    for(auto it2: v){
        cout<<it2.second<<" ";
    }
    cout<<endl;
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