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
    ll a,b,n;
    cin>>a>>b>>n;
    ll x ,y;
    vector<pair<ll,ll>> v;
    forn(i,n){
        cin>>x;
        
        v.push_back({x,1});
        
    }
    forn(i,n){
        cin>>y;
        v[i].second = y;
    }
    
    sort(v.begin(),v.end());
    int flag1 =-1;
    int flag2 =-1;
    ll div1;
    ll div2;
    
    forn(i,n){
        
        div1 = (v[i].second)/a;
        if((v[i].second)%a!=0){
            div1++;
        }
        div2 = b/v[i].first;
        if((b%v[i].first!=0)){
            
            div2++;
        }
        if(div2 == min(div1,div2)){
            if(div1 == div2){
                flag1=1;
                if(i==n-1){
                    flag2=1;
                }
                else{
                    flag2=0;
                }
                break;
            }
            else{
                flag2=0;
                flag1=0;
                break;
            }
        }
        else{
            b = b-div1*v[i].first;
        }
        // cout<<div1<<" "<<div2<<" "<<flag1<<" "<<flag2<<endl;
    }
    
    if(flag1==-1 && flag2==-1){
        cout<<"YES"<<endl;
    }
    else if(flag1==1 && flag2 ==1){
        cout<<"YES"<<endl;
    }
    else if(flag1 ==1 && flag2 ==0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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