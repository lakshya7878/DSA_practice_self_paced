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




int t=1;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    
    int arr[2][2];
    int flag1 = 0;
    int flag2 =0;
    
    for(int i=n;n>0;n--){
        cin>>arr[0][0]>>arr[0][1];
        cin>>arr[1][0]>>arr[1][1];
        if(arr[0][0]==arr[1][1]){
            flag1 =1;
        }
        if(arr[0][1]==arr[1][0]){
            flag2 =1;
        }
        
    }
    
    
    
    if(m&1 ){
        cout<<"NO"<<endl;
    }
    // else if(m==1){
    //     cout<<"YES"<<endl;
    // }
    else if( flag2 ==1){
        cout<<"YES"<<endl;
    }
    else if(flag1*flag2 == 0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    
}
return 0;
}
