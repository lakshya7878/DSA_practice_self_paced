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

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int i =0,j=n-1;
    if(n==2 || n==1){
        cout<<0<<endl;
    }
    else{
        while(i<=j){
        if(arr[i]==arr[0]){
            i++;
        }
        if(arr[j]==arr[n-1]){
            j--;
        }
        if(arr[i] !=arr[0] && arr[j]!=arr[n-1]){
            break;
        }
    }
    if(i>j){
        cout<<0<<endl;
    }
    else{
        cout<<j-i+1<<endl;
    }
    

    }
    
    
    
return 0;
}
