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
 struct Node{
     int data;
     Node *left, *right;
     Node(int k){
         data = k;
         left = NULL;
         right = NULL;
     }
 };

void BFS(Node *root){              // important
    if(root == NULL) return;
    queue<Node*> q;
    q.push(root);
    while(q.empty()==false){
        
        Node *curr = q.front();
        q.pop();
        cout<<curr->data<<endl;
        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }
    }
}


bool children_sum(Node *root){
    if(root == NULL) return true;
    if(root->left == NULL && root->right == NULL) return true;
    int sum;
    
    if(root->left == NULL) sum = root->right->data +0;
    else if(root->right == NULL ) sum = root->left->data +0;
    else sum = root->left->data + root->right->data;
    return (root->data == sum) && children_sum(root->left)&&children_sum(root->right) ;
}

void solve(){
  Node *root = new Node(50);
    root->left = new Node(10);
    root->right = new Node(40);
    root->right->right = new Node(5);
    root->right->left = new Node(38);
    cout<<children_sum(root)<<endl;
 
}


int main()
{
    fast_cin();
    ll t=1;
    
    while(t--) {
        solve();
    }
    return 0;
}