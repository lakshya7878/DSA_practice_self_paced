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
 
 char leftmost(string str){
     vector<int> vec(26,0);
     for(int i=0;i<str.length();i++){
         vec[str[i]-'a']++;
     }
     for(int i=0;i<str.length();i++){
         if(vec[str[i]-'a']>1){
             return str[i];
         }
     }
     return '@'; // no such element
 }

 // one more  apprach is give below :
//basic approach is to compare the first appearence indexes of elements that are 
// appearing more than once
 int leftmost2(string str){
     int res = INT_MAX;
     vector<int> vec(256,-1);
     for(int i=0;i<str.length();i++){
         
         if(vec[str[i]]==-1){
             vec[str[i]] = i;
             
         }
         else{
             res = min(res,vec[str[i]]);
         }
     }
     return (res==INT_MAX) ? -1 : res;
 }

 int leftmost3(string str){
     vector<bool> vec(256,false);
     int res = -1;
     for(int i=str.length()-1;i>=0;i--){
         if(vec[str[i]]==false){
             
             vec[str[i]]=true;
         }
         else{
             res = i;
         }
     }
     return res;
 }


int main()
{
    fast_cin();
    string str = "aabbc";
    cout<<leftmost3(str);
    return 0;
}