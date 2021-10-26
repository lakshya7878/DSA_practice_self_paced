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

int moves(int n,int x){
    
    return x-1 + (n-1)/x; // x-1 portion is climbing by increasing 1
                            // n-1/x or in simple words n-x/x is the number of copies we
                             //are going to make of the element
}
int32_t main(){
fast


int t;
    cin>>t;
    while(t--){
        int p;
        int n;
        cin>>n;
        int ans = INT_MAX;
        int x = sqrt(n);
        for(int i=1;i<=x;i++){
            ans = min(ans ,moves(n,i));
        }
    cout<<ans<<endl;
    }
 
return 0;
}
