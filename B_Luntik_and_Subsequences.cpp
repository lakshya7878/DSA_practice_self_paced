#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
 
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
 

int main()
{
    fast_cin();
    ll t;
    cin >> t;
    while(t--) {
        int n;
        cin>>n;
        int arr[n];
        int zer =0;
        int one=0;
        forn(i,n){
            cin>>arr[i];
            if(arr[i]==0){
                zer++;
            }
            else if(arr[i]==1){
                one++;
            }
        }
        
       
            cout<<(1ll<<zer)*one<<endl;
        
        // the << sign in the bracket is not of cout it is left shift which means that we are basically calculating 2^zer because we are shifting 1 by zer so if we write 1 << 3 it means in binary 0001 -> 1000 which is 2^3 -8 also 1LL means 1 in long long , 2ll means 2 in long long. this is deone to prevent overflow. because if we shift 1 by left more than 32 times which is (int) then we will need to convert it into long long to calculate the right answer 

        // so line 83 can also be replaced with 
        //long long zerr = zer;
        // long long ans1 = pow(2,zerr);
        //     cout<<ans1*one<<endl;
        

    }
    return 0;
}