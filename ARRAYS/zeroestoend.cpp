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

void zerotoend(int arr[],int n){
    int pos =0;
    int count =0;
    for(int i =0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[count],arr[i]);
            count++;
        }
        
    }
}

int32_t main(){
fast

int arr[] = {0,1,0,0,4};

zerotoend(arr,5);
for(int i :arr){
    cout<<i<<endl;
}
return 0;
}
