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
                                            //basically we know that we will get max difference
                                            //only if we subtract current element from the max 
                                            // element on its right so we traverse in reverse 
                                            // direction and if we find  smaller element than
                                            // the one on p we calcualte the difference and 
                                            //keep on doing it until we find an even larger 
                                            //element than p (we switch p to the new largest 
                                            // one).. Do note that we also take the difference 
                                            // of old largest and the new largest so that if 
                                            // the array is in descending order then also we
                                            // get the max difference(which will be negative)

// this question is similar to the one where we find the leader elements in an array
int maxdiff(int arr[], int n){
    int p=n-1;
    int d;
    int diff = INT_MIN;

    rforn(i,n-2){
    d = arr[p] - arr[i];           
    diff = max(diff,d);
    if(arr[i]>=arr[p]){
            p = i;
        }
    }

    return diff;
        
    }
        



int main()
{
    fast_cin();
    int arr[] = {10,5,2,8,1};
    cout<<maxdiff(arr,5);
    return 0;
}