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
 

void solve(){
    ll a,b;
    cin>>a>>b;
    ll ans;
    ll div = max(a,b)/3;

    if(a==0 || b==0){
        cout<<0<<endl;
    }
    
    else{
        if(a==b){
            cout<<a/2<<endl;
        }
        // else if(max(a,b)%3==0){
        //     ll ans = min(div , min(a,b));
        //     cout<<ans<<endl;
        // }
        else{
            if(min(a,b)<=div){
                ans =min(a,b);
            }
            

            // if(max(a,b)/2>=min(a,b)){

            
            //     if(min(a,b)<=div){
            //         cout<<min(a,b)<<endl;
                    
                    
            //     }
            //     else{
                    
            //         ll temp  = min(a,b)- div;
                    
            //         ll rem = temp/3;

            //         ll remaind  = max(a,b)%3;
                    
            //         ll ans2 = min(remaind,rem);
            //         ans2 = ans2 + div;
            //         cout<<ans2<<endl;
            //     }
            // }
            // else{
            //     ll divi = min(a,b)/2;
            //     if(min(a,b)%2==0){
            //         cout<<divi<<endl;
            //     }
            //     else{
            //         ll remai = max(a,b)-2*divi;
            //         ll divi2 = remai/2;
            //         divi = divi + min(divi2,min(a,b)%2);
            //         cout<<divi<<endl;
            //     }
            // }
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