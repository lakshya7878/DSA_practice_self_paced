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
    ll n,k;
    cin>>n>>k;
    ll arr[n];
    forn(i,n){
        cin>>arr[i];
    }
    vector<ll> v;
    ll count =0;
    ll p=0,q=0;
    for(int i=1;i<=k;i++){
        while(true){
            cout<<p<<" "<<q<<endl;
            if(p==n || q==n){
                break;
            }
            if(arr[p]==k) {
                p++;
            }
            if(arr[q]==k){
                q++;
                if(p==q){
                    q=p+1;
                }
                continue;
            }
            if(arr[q]!=arr[i]){
                count++;
                p++;
                q++;
                continue;
            }

        }
        v.push_back(count);
    }
    for(auto it:v){
        cout<<it<<" ";
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

// for(int i=0;i<n;i++){
//     if(i==0){
//         v.push_back(arr[0]);
//     }
//     else{
//         if(arr[i]==arr[i-1]){
//             continue;
//         }
//         else{
//             v.push_back(arr[])
//         }
//     }
// }