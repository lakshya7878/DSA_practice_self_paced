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
void rev(char arr[],int i,int j,vector<int> &v){
    int p =j-1;
    while(p>=i){
            
            v.push_back(j);
            swap(arr[p],arr[j]);
        
        j--;
        p--;
            
        }
    // while(i<j){
        
        
    // }
}

int32_t main(){
fast
int n;
vector<int> v;
cin>>n;
int moves = 0;
int flag = 0;
char s[n];
char t[n];
for(int i=0;i<n;i++){
    cin>>s[i];
}
for(int i=0;i<n;i++){
    cin>>t[i];
}

for(int j=0;j<n;j++){
    if(s[j]==t[j]){
        continue;
        
    }
    else{
        int p =j;
        int q= j;
        while(p<n&&s[p]!=t[q]){
           
            p++;
        }
        // cout<<p<<n<<"pn"<<endl;
        // cout<<p<<" "<<n<<"pn"<<endl;
        if(p>=n){
            moves = moves+0;
            flag = 1;
        }
        else{
            
            rev(s,j,p,v);
            // for(int i=0;i<n;i++){
            //     cout<<s[i];
            // }
            // cout<<endl;
            
            moves = moves + (p-j);
            
            
        }
        
    }
    if(flag==1){
        
        cout<<-1<<endl;
        break;
    }
    
}
if(flag!=1){
        if(moves<=1e4){
           
        cout<<moves<<endl;
        // for(int i=0;i<n;i++){
        //     cout<<s[i] ;
        // }
        // cout<<endl;
        // for(int i=0;i<n;i++){
        //     cout<<t[i] ;
        // }
        // cout<<endl;
        for(int i=0;i<v.size();i++){
            
            cout<<v[i]<<" ";
        }
        cout<<endl;

        }
        else{
            
            cout<<-1<<endl;
        }
    }
return 0;
}









