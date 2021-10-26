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
int countmove(int n,int num){
    int j= num%10;
    int i=num/10;
    int count =0;
    int last2 = i*10 +j;
    int dig = j;
    int found =0;
    
    while(n>0){
       
        if(found ==2){
            break;
        }
        if(n%10 != dig){
            n/=10;
            count++;
        }
        
        if(n%10==dig){
            n/=10;
            dig  = i;
            found++;
        }
      
    }
    
    return count;

}

int32_t main(){
fast




int t=1;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int mini = INT_MAX;
    mini = min(countmove(n,00),min(countmove(n,50),min(countmove(n,75),countmove(n,25))));
    cout<<mini<<'\n';
}
return 0;
}
