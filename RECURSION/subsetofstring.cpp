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

// here  we have two options - to not add the next element in the subset
// or to add it in the subset 
// but once we reach the function call where i == string length then we know that 
// we have reached the bottom of tree and we should print the subset 
// all combination will be printed 
// same can be done with bitwise approach as well in the bitwise folder 


void subset(string s,string curr,int i){
    if(i == s.length()){
        cout<<curr<<" ";
        return ;
    }

    subset(s,curr,i+1);
    subset(s,curr+s[i],i+1);


}


int32_t main(){
    fast
    string s = "abc";
    subset(s,"",0);

return 0;
}
