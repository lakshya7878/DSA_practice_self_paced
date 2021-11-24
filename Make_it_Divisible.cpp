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
 

void solve(){
 ll n;
 cin>>n;
 ll arr[n];
 ll sum =0;
 forn(i,n){
     cin>>arr[i];
     
 }
 ll count1 =0;
 ll count2 =0;
 ll ex_one = 0;
 ll ex_two =0;
 int flag =0;
 forn(i,n){
     
     if(arr[i]%3==2){
        
         
         ex_two++;
     }
     if(arr[i]%3==1){
        
         ex_one++;
     }
 }

 if(ex_one+ex_two ==0){
     cout<<0<<endl;
     
 }
 else if(ex_one == ex_two ){
     cout<<ex_one<<endl;
 }
 else if((ex_one== 0)||(ex_two==0)) {
     if( (ex_one+ex_two)%3==0){
         if(ex_two>0){
         int div = (ex_one+ex_two)/3;

    cout<<div*2<<endl;

         }
         else{
             int div2 =  (ex_one+ex_two)/3;
             cout<<div2*2<<endl;
         }
     }
     else{
         cout<<-1<<endl;
     }
 }
  
 else {
     
     ll moves = min(ex_one,ex_two);
     if((max(ex_one,ex_two)-min(ex_one,ex_two))%3==0 ){
         int div3 = (max(ex_one,ex_two)-min(ex_one,ex_two))/3;
         moves = moves + 2*div3;
         cout<<moves<<endl;
     }
     else{
         cout<<-1<<endl;
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