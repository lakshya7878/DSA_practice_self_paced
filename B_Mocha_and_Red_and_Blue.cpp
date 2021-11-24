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
        char arr[n];
        int r_evenpos =0;
        int b_evenpos =0;
        int r_oddpos =0;
        int b_oddpos =0;
        forn(i,n){
            cin>>arr[i];
           
        }
        int i=0;
        for(i;i<n;i++){
            if(arr[i]!='?'){
                break;
            }
        }
        int rev = i-1;
        if(i<n){
            
        for(rev ;rev>=0;rev--){
            if(arr[rev+1]=='R'){
                arr[rev] = 'B';
            }
            else{
                arr[rev] = 'R';
            }
        }
        for(i+1;i<n;i++){
            if(arr[i]=='?'){
                if(arr[i-1]=='R'){
                    arr[i]='B';
                }
                else{
                    arr[i] = 'R';
                }
            }
        }
        
        i=0;
        }
        else if(i==n){
            
            for(int j=0;j<n;j++){
                if(j&1){
                    arr[j]= 'B';
                }
                else{
                    arr[j]='R';
                }
            }
        }




        
        forn(i,n){
            cout<<arr[i];
        }
        cout<<'\n';

    }
    return 0;
}