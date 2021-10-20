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
int p =1;
while(t--){
    
    int n,d,c,m;
    cin>>n>>d>>c>>m;
    int flag = 0;
    char S[n];
    for(int i=0;i<n;i++){
        cin>>S[i]; 
    }
    for(int j=0;j<n;j++){
        if(S[j]=='D'){
            if(d ==0 ){
                cout<<"hello"<<endl;
                flag = 1;
            }
            else{
            d = d-1;
            c = c+m;
            }
            
        }
        else{
            if(c==0){
                continue;
            }
            c = c-1;
        }
    }
        if(flag == 1){
            cout<<"Case"<<" "<<"#"<<p<<':'<<" "<<"NO"<<endl;
        }
        else{
            
            cout<<"Case"<<" "<<"#"<<p<<':'<<" "<<"YES"<<endl;
        }
        p++;


}
return 0;
}
