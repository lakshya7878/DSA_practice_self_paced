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
    ll n, q;
    cin>>n>>q;
    // dbg(n);
    // dbg(q);
    string s;
    cin>>s;
    vector<pair<ll,ll>> v;
    ll a,b;
    forn(i,q){
        cin>>a>>b;
        v.push_back({a,b});
    }
    for(int i=0;i<q;i++){
        int flag1 = 0;
        int flag2 =0;
        if(v[i].first == v[i].second){
            cout<<"NO"<<endl;
        }
        else if(v[i].first ==1 && v[i].second == q){
            cout<<"NO"<<endl;
        }
        else{
            for(int j=0;j<=(v[i].first -2);j++){
                if(s[j]==s[v[i].first -1]){
                    flag1 = 1;
                    break;
                }
            }
            for(int k=s.length()-1;k>=v[i].second;k--){
                if(s[k]==s[v[i].second -1]){
                    flag2 =1;
                    break;
                }
            }
            if(flag1==1 || flag2 ==1){
                cout<<"YES"<<ln;
            }
            else{
                cout<<"NO"<<ln;
            }
        }
    }
    v.clear();
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