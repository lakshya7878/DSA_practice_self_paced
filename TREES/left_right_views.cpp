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


// use this when we have height<width
int max_level = 0; // global variable to maintain the count of highest level we have moved to
// recursive leftview
 void leftView(Node *root, int level){
     if(root == NULL) return ;
     if(max_level<level){
         cout<<root->data<<endl;
         max_level = level;
     }
     leftView(root->left, level+1);   //NLR
     leftView(root->right,level+1);

 }

// use this when we have height<width

 //right view by just making NRL
 void rightView(Node *root, int level){
     if(root == NULL) return ;
     if(max_level<level){
         cout<<root->data<<endl;
         max_level = level;
         
     }
     rightView(root->right,level+1);
     rightView(root->left, level+1);

 }


 //now let us use stack method (i.e level order treaversal to do the same)

// use this when we have height>width

 void leftViewLevel(Node *root){
     if(root == NULL ) return;
     queue<Node *> q;
     q.push(root);
     while(q.empty()==false){
         int count = q.size();
         for(int i=0;i<count;i++){
                Node *curr = q.front();
                q.pop();
             if(i==0){
                 cout<<curr->data<<endl;
                 

             }
             if(curr->left!=NULL) q.push(curr->left);  //first left then right
             if(curr->right!=NULL) q.push(curr->right);
         }
     }
 }


// use this when we have height>width


 //right view using level ordering (queue)
 void rightViewLevel(Node *root){

     if(root == NULL ) return;
     queue<Node *> q;
     q.push(root);
     while(q.empty()==false){
         int count = q.size();
         for(int i=0;i<count;i++){
                Node *curr = q.front();
                q.pop();
             if(i==0){
                 cout<<curr->data<<endl;
                 

             }
             if(curr->right!=NULL) q.push(curr->right);   //first right then left
             if(curr->left!=NULL) q.push(curr->left);
         }
     }
 }






 void solve(){
  Node *root = new Node(50);
    root->left = new Node(40);
    root->right = new Node(60);
    root->right->right = new Node(55);
    root->right->right->right = new Node(444);
    root->right->left = new Node(155);
    leftView(root,1);
    cout<<"###########"<<endl;
    leftViewLevel(root);
    cout<<"###########"<<endl;
    max_level =0;
    rightView(root,1);
    cout<<"###########"<<endl;
    rightViewLevel(root);
    



 
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