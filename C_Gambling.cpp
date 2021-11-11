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
    long long  l;
    cin>>l;
    long long arr1[l];
    long long arr2[l];
    forn(i,l){
        cin>>arr1[i];
    }
    forn(i,l){
        cin>>arr2[i];
    }
    sort(arr1,arr1+l);
    sort(arr2,arr2+l);
    long long sum2 =0;
    long long a =l-1;
    long long b=l-1;
    long long sum1 =0;
    long long chance =1;
    
    while(a!=-1 || b!=-1){
        
        
        
        if(chance ==1){
           if(a>=0 && b>=0){

            if(arr1[a]>arr2[b]){
                sum1  = sum1 + arr1[a];
                a--;
            }
            else{
                b--;
                
            }
           }
           else if(a>=0){
               sum1  = sum1 + arr1[a];
                a--;
            
            
            
           }
           else {
                 b--;
            
           }
            chance =0;
        }
        else{
            if(a>=0 && b>=0){

             if(arr2[b]>arr1[a]){
                sum2  = sum2 + arr2[b];
                b--;
            }
            else{
                a--;
            }
            }
            else if(a>=0){
                a--;
            }
            else{
                sum2  = sum2 + arr2[b];
                b--;
            }
            chance =1;
        }
    }
    
    // while(b>-1){
       
        
    //     if(chance ==1){
    //         b--;
            
            
    //         chance =0;
    //     }
    //     else{
             
                
            
            
    //         chance =1;
    //     }
    // }
    // while(a>-1){
               
              

    //     if(chance ==1){
            
                
    //     }
    //     else{
             
              
    //     }
    // }
    cout<<sum1-sum2<<endl;

    return 0;
}