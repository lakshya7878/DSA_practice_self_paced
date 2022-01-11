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
    ll c1,c2,c3;
    cin>>c1>>c2>>c3;
    ll a,b,c,a1,b1;
    cin>>a>>b>>c>>a1>>b1;
    if(c1<a || c2<b || c3 <c){
        cout<<"NO"<<ln;
    }
    else{
        c1 = c1-a;
        c2 = c2-b;
        c3 = c3-c;
        int flag1 = -1;
        int flag2 = -1;
        if(c1>=a1){
            
            flag1 = 1;
        }
        else{
            a1 = a1 -c1;
            if(c3>=a1){
                c3 = c3 - a1;
                flag1 =1;
            }
            else{
                flag1 = -1;
                flag2 = -1;
            }
        }
        if(flag1 ==1){
            if(c2>=b1){
            
            flag2 = 1;
        }
        else{
            b1 = b1 -c2;
            if(c3>=b1){
                c3 = c3 - b1;
                flag2 =1;
            }
            else{
                flag1 = -1;
                flag2 = -1;
            }
        }
        }
        if(flag1 == 1 && flag2 ==1){
            cout<<"YES"<<ln;
        }
        else{
            cout<<"NO"<<ln;
        }
    }

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