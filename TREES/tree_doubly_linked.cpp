#include <bits/stdc++.h>  
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pl;
typedef pair<double,double> pdd;
typedef vector<ll> vl;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
typedef vector<vector<ll> > vvl;
typedef vector<vector<pl> > vvpl;
typedef vector<pl> vpl;
typedef vector<pii> vpi;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define si(x) scanf("%d",&x)
#define sl(x) scanf("%lld",&x)
#define ss(s) scanf("%s",s)
#define pi(x) printf("%d\n",x)
#define pl(x) printf("%lld\n",x)
#define ps(s) printf("%s\n",s)
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
 
 struct Node{
     int data;
     Node *left, *right;
     Node(int k){
         data = k;
         left = NULL;
         right = NULL;
     }
 };
Node *head = NULL;
Node *prev = NULL;
int f=0;
void inorder(Node *root, Node* &head,Node* &prev,int &f){
    if(root == NULL) return;
    inorder(root->left,head,prev,f);
    if(f==0){
        f=1;
        head = root;
        root->left =NULL;
        
        
    }
    else{
        root->left = prev;
        prev->right = root;
        
        
    }
    prev =root;
    inorder(root->right,head,prev,f);
    
}



Node * treetodoubly(Node *root){
    if(root == NULL ) return root;
    
    
    inorder(root,head,prev,f);
    return head;

}


 void solve(){
  Node *root = new Node(50);
    root->left = new Node(40);
    root->right = new Node(60);
    root->right->right = new Node(55);
    
    Node *ans= treetodoubly(root);
    while(ans !=NULL){
        
        cout<<ans->data<<" ";
        ans = ans->right;

    }
    cout<<endl;
    



 
}


int main()
{
    fast_cin();
    ll t=1;
    // cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}