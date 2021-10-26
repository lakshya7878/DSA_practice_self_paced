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
        scanf("%lld",&t); 

while(t--){
    int N;
scanf("%lld",&N); 
int sum =0;
int multi = 1;

    int C[N];
    for(int i=0;i<N;i++){
                scanf("%lld",&C[i]); 

    }
    
        vector<int> vec1;
        vector<int> vec2;
    
    for(int i=0;i<N;i++){
        if(i&1){
            sum = sum+C[i];
            vec2.push_back(C[i]);
        }
        else{
            
            vec1.push_back(C[i]);
        }
    }
    sort(vec2.begin(),vec2.end());
 
    
    sort(vec1.begin(), vec1.end(), greater<int>());
    
    

    vector<int> vec3;
    int p=0;
    int q =0;
    for(int i=0;i<N;i++){
        if(i&1){
            vec3.push_back(vec2[q]);
            q++;
        }
        else{
            vec3.push_back(vec1[p]);
            p++;
        }
    }

    
    for(int z = 0;z<N;z++){
        printf("%lld",vec3[z]);
        printf(" ");
        
    }
    printf("\n");
    
    int ans =  0;
    
    for(int i=0;i<N-1;i=i+2){
        if(i==0){
            ans = vec3[0]* sum;
            
        }
        else{
            // cout<<sum<<endl;
            sum = sum - vec3[i-1];
            ans = ans + sum*vec3[i];
            // cout<<sum<<"sum"<<endl;
        }
    }
    
    printf("%lld",ans);
    
}
return 0;
}



















#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define si(x) scanf(
%d
,&x)
#define sl(x) scanf(
%lld
,&x)
#define ss(s) scanf(
%s
,s)
#define pi(x) printf(
%d

,x)
#define pl(x) printf(
%lld

,x)
#define ps(s) printf(
%s

,s)
#define deb(x) cout << #x << 
=
 << x << endl
#define deb2(x, y) cout << #x << 
=
 << x << 
 << #y << 
=
 << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int,int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;


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
    
}
return 0;
}
