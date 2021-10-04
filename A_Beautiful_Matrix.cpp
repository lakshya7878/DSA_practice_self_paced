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
    int val;
    int x =0;
    int y=0;
    int moves = 0;

    for(int i=1;i<=25;i++){
        cin>>val;
        if(val ==1){
            x = i/5;
            if((i%5>0)&&(i%5<5)){
                
                x++;
            }
            y = i%5;
            if(y==0){
                y=5;
            }
        }
    }
    // cout<<x<<" "<<y<<endl;
    moves = abs(3-x)+abs(3-y);
    cout<<moves<<endl;

    return 0;
    }
