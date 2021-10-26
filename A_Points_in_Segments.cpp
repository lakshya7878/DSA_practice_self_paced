#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pi (3.141592653589)
#define mod 1000000007
#define int long long
#define float double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(i,n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);


bool isPrime(int n){
    if(n==1) return false;
    if(n==2) return true;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return false;
    }
    return true;
}

int32_t main(){
fast


    int n,m;
    int count =0;
    cin>>n>>m;
    vector<bool> v(m+1,true);
    int l,s;
    for(int i=0;i<n;i++){
        cin>>l>>s;
        for(int p=l;p<=s;p++){
            v[p] = false;
        }
    }

    
    for(int i=1;i<m+1;i++){
        if(v[i]==true){
            count++;
        }
    }
    cout<<count<<endl;
    
    for(int i=1;i<m+1;i++){
        if(v[i]==true){
            cout<<i<<" ";
        }
    }
    cout<<endl;

return 0;
}
//https://codeforces.com/contest/1015/problem/A