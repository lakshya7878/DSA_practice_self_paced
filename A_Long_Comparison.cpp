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
    ll x1,p1,x2,p2;
    cin>>x1>>p1>>x2>>p2;
    ll temp1 = x1;
    ll temp2= x2;
    ll count1=0;
    ll count2 =0;
    vector<ll> v1;
    vector<ll> v2;

    while(temp1>0){
        count1++;
        v1.push_back(temp1%10);
        temp1=temp1/10;
    }
    while(temp2>0){
        v2.push_back(temp2%10);
        count2++;
        temp2=temp2/10;
    }
    ll sum1 = count1+p1;
    ll sum2 = count2 +p2;
    
    if(sum1>sum2){
        cout<<'>'<<endl;
    }
    else if(sum2>sum1){
        cout<<'<'<<endl;
    }
    else{
        int flag1=0;
        int flag2=0;
        ll i =v1.size()-1;
        ll j= v2.size()-1;
        while(true){
            
            if(i<0&&j<0){
                flag1 =1;
                flag2=1;
                break;
            }
            if(i<0){
                flag2 =1;
                break;
            }
            if(j<0){
                flag1 =1;
                break;
            }
            if(v1[i]==v2[j]){
                i--;
                j--;
                continue;
            }
            else{
                if(v1[i]>v2[j]){
                    flag1 =1;
                    flag2=0;
                }
                else{
                    flag2=1;
                    flag1=0;
                }
                break;
            }

        }
        if(i==-1 && j>=0){
            int check2=0;
            while(j>=0){
                if(v2[j]!=0){
                    check2=1;
                    break;
                }
                j--;
            }
            if(check2 ==1){
                flag2=1;
                flag1=0;
            }
            else{
                flag2=1;
                flag1=1;
            }
        }
        if(j==-1 && i>=0){
            int check1=0;
            while(i>=0){
                if(v1[i]!=0){
                    
                    check1=1;
                    break;
                }
                i--;
            }
            
            if(check1 ==1){
                
                flag1=1;
                flag2=0;
            }
            else{
                flag2=1;
                flag1=1;
            }
        }
        if(flag1==1 && flag2==1){
            cout<<'='<<endl;
        }
        else if(flag1==1){
            cout<<'>'<<endl;
        }
        else{
            cout<<'<'<<endl;
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