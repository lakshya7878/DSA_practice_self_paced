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
        int n,k;
    cin>>n>>k;
    int place =0;
    int moves =0;
    int stringlength = 0;
    int flag = 0;
    char arr[n];
   

    int countzero = 0;
    int countone = 0;
    for(int i=0;i<n;i++){
        
        cin>>arr[i];
        if(arr[i]=='1'){
            countone++;
        }
    }
    if(countone==0){   //case for empty
        if(n%(k+1)==0){
             moves = n/(k+1);
        }
        else{
             moves = n/(k+1)+1;
        }
       
    }
    else {
    for(int i=0;i<n;i++){
        if(arr[i]=='0'){
            stringlength++;
            if(i==n-1 && arr[i - stringlength] =='1' && stringlength>=(k+1) ){  //end
                stringlength = stringlength - k;
                if(stringlength%(k+1)==0){
                moves = moves + stringlength/(k+1);
                }
            else{
                moves = moves + stringlength/(k+1)+1;
            }
                // moves = moves + stringlength/(k+1)+1;
            
        }
        }
        if(arr[i]=='1'){
            if(i==stringlength && i!=0){   //begin
                if(stringlength>=(k+1)){
                    stringlength = stringlength - k;
                    if(stringlength%(k+1)==0){
                        
                        
                moves = moves + stringlength/(k+1);
                
                }
            else{
                moves = moves  + stringlength/(k+1)+1;
            }
                    // moves = moves + stringlength/(k+1)+1;

                }
            }
            else if(stringlength>=(2*k+1)){      //between
                stringlength = stringlength - 2*k;
                


            if(stringlength%(k+1)==0){
                moves = moves + stringlength/(k+1);
               }

            else{
                moves = moves + stringlength/(k+1)+1;
            }
                // moves = moves + stringlength/(k+1)+1;
                
               
            }
        
         stringlength = 0;
            
        
    }
    

    



}

    }
    cout<<moves<<endl;
}
return 0;
}
