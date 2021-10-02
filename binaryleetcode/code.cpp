#include<bits/stdc++.h>
using  namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        char S[n];
        for(int j=0;j<n;j++){
            cin>>S[j];
        }

        
        int count=0;
        for(int i=n-1;i>=0;i--){
            if(i==n-1&& S[i]!='0'){
                count = int(S[i])-48;
                // cout<<count<<"lakshya "<<endl;
            }
            else if (S[i]=='0'){
                continue;
            }
            else {
                count++;
                count = count + int(S[i]) -48;
            }
        }
        cout<<count<<endl;
    }
}