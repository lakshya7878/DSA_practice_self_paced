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

int sumsub(int arr[],int sum,int n){
    // if(sum==0){
    //     return 1;
    // }
    if(n==0){
        return (sum==0) ? 1:0;
    }
    return sumsub(arr,sum,n-1) + sumsub(arr,sum-arr[n-1],n-1);
}



int32_t main(){
fast
    int arr[] =  {1,4,5,6,7,4};
    cout<<sumsub(arr,0,6)<<endl;

return 0;
}
