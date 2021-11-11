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
 // we have made 2 256 sized array which saves the frequency of characters of both the arrays and the freq1 saves the frequency of every window of size m and sends to the function areSame to check whether they are anagram or not.
void areSame(vector<int> freq1, vector<int> freq2,int pos){
    int flag =1;
    for(int i=0;i<256;i++){
        if(freq1[i]!= freq2[i]){
            flag =0;
            break;
        }
    }
    if(flag==1) cout<<pos<<endl;

    
}


 void check_anagram(string &txt, string &pat){
     vector<int> freq1(256,0);
     vector<int> freq2(256,0);
     int n=txt.length();
     int m= pat.length();
     for(int i=0;i<m;i++){
         freq1[txt[i]]++;
         freq2[pat[i]]++;
     }
    areSame(freq1,freq2,0);
    for(int i=m;i<n;i++){
        freq1[txt[i]]++;
        freq1[txt[i-m]]--;
        areSame(freq1,freq2,i-m+1);
    }
 }

int main()
{
    fast_cin();
    string txt = "lakshyasharma";
    string pat = "hsa";
    check_anagram(txt,pat);
    return 0;
}