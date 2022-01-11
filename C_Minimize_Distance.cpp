#include <bits/stdc++.h>  
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double lld;
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


double eps = 1e-12;
#define MOD1 1000000007
#define MOD2 998244353
#define forn(i,e) for(ll i = 0; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

#define si(x) scanf("%d",&x)
#define sl(x) scanf("%lld",&x)
#define stri(s) scanf("%s",s)
#define pi(x) printf("%d\n",x)
#define pl(x) printf("%lld\n",x)
#define ps(s) printf("%s\n",s)


#ifndef ONLINE_JUDGE
#define dbg(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define dbg(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}


/*********************************************************************************/
ll gcd(ll  a, ll b){ if (b == 0) {return a;} return gcd(b, a % b);} 
ll lcm(ll a, ll b){ return (a / gcd(a, b)) * b;}
vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
vector<bool> sievebool(ll n){vector<bool> isPrime(n+1,true); for(int i=2;i*i<=n;i++){if(isPrime[i]){for(int j=i*i;j<=n;j=j+i){isPrime[j]=false;}}}return isPrime;}
bool isPowerOfTwo(ll n){ if(n==0){return false;} return (ceil(log2(n)) == floor(log2(n)));}
void swap(int &a, int &b) {a ^= b; b ^= a; a ^= b;}
bool isPrime(int n){if (n <= 1){return false;}for (int i = 2; i < n; i++){if (n % i == 0){return false;}return true;}}
/*********************************************************************************/





void solve(){
    ll n,k;
    cin>>n>>k;
    ll arr[n];
    vector<ll> v1;
    vector<ll> v2;
    forn(i,n){
        ll a ;
        cin>>a;
        if(a>0){
            v1.push_back(a);
        }
        else if(a<0){
            v2.push_back(a);
        }

    }
    ll sz1 = v1.size();
    
    ll sz2 = v2.size();
    if(v1.size()>0&& v2.size()>0){
        ll sum =0;
        sort(all(v1));
        sort(all(v2),greater<int>());
        if(abs(v1[v1.size()-1])>abs(v2[v2.size()-1])){
            
            for(ll i=k-1;i<=v2.size()-1;i= min((i+k-1),sz2-1)){
                sum = sum + 2*abs(v2[i]);
            }
            for(ll i=k-1;i<=v1.size()-1;i= min((i+k-1),sz1-1)){
             
                if(i==v1.size()-1){
                    sum = sum + abs(v1[i]);
                }
                else{
                    sum = sum + 2*abs(v1[i]);
                }
                
            }
            cout<<sum<<endl;


        }
        else if(abs(v1[v1.size()-1])<abs(v2[v2.size()-1])){
            for(ll i=k-1;i<=v1.size()-1;i= min((i+k-1),sz1-1)){
                
                    sum = sum + 2*abs(v1[i]);
                
                
            }


            for(ll i=k-1;i<=v2.size()-1;i= min((i+k-1),sz2-1)){

                if(i==v2.size()-1){
                    sum = sum + abs(v1[i]);
                }
                else{
                sum = sum + 2*abs(v2[i]);
            }
            
            cout<<sum<<endl;
        }
        
    }
    else{
        cout<<-1<<endl;
    }
    



}
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif

    fast_cin();
    ll t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}