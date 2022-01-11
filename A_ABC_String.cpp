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
    string s;
    cin>>s;
    int counta =0,countb=0,countc =0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='A'){
            counta++;
        }
        else if(s[i]=='B'){
            countb++;
        }
        else{
            countc++;
        }
    }
    map<int ,char> m;
    m.insert({counta,'A'});
    m.insert({countb,'B'});
    m.insert({countc,'C'});
    if(s[0]==s[s.length()-1]){
        cout<<"NO"<<ln;
    }
    else{
        auto it = m.end();
        --it;
        ll count =0;
        int flag =0;
        if(s[0]==it->second || s[s.size()-1]==it->second){
            
            if(s[0]==it->second){
                
                for(int i=s.size()-1;i>=0;i--){
                    if(s[i]!=it->second){
                        count++;
                    }
                    else{
                        count--;
                    }
                        if(count<0){
                            flag =1;
                            break;
                        }
                }
                if(flag ==1){
                    cout<<"NO"<<endl;
                }
                else  if(count ==0){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
            else{
                
                for(int i=0;i<s.length();i++){
                    if(s[i]!=it->second){
                        count++;
                    }
                    else{
                        count--;
                    }
                    if(count<0){
                        flag =1;
                        break;
                    }
                }
                if(flag==1){
                    cout<<"NO"<<endl;
                }
                else if(count ==0){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
        }
        else{
            cout<<"NO"<<endl;
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