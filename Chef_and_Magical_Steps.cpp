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
vector<bool> obj(10000001,true);
vector<int> countsum(10000000,0);
void sieve(){
    for(int i=2;i*i<=10000000;i++){
        if(obj[i]){
            for(int j=i*i;j*j<=10000000;j=j+i){
            obj[j] = false;
            }

        }
    }
    
    for(int k=1;k<10000001;k++){
        countsum[k] = countsum[k-1] + obj[k];
        
    }
   
}

int32_t main(){
fast


sieve();

int t=1;
cin>>t;
while(t--){
    int x,y;
    cin>>x>>y;
    int primes = countsum[y] - countsum[x+1];
    int moves = y -x -primes;
    if(x==1 && y ==2){
        cout<<1<<endl;
    }
    else if(x==2 && y ==3){
        cout<<1<<endl;
    }
    else {
        cout<<moves<<endl;
    }

}
return 0;
}
