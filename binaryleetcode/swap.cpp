#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int a[n];
        int b[n];
        int p=0;
        int q=0;
        int count =0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int j=0;j<n;j++){
            cin>>b[j];
        }
        if(a[0]<b[0]){
            count =0;
            cout<<count<<endl;
        }
        else{
            // cout<<"lakshya"<<endl;
            while(p<n){
                if(a[p]>b[q]){
                    p++;
                    count++;
                    // cout<<count<<"laksh"<<endl;
                }
                if(a[p]==b[q]){
                    p++;
                    q++;
                }
                if(a[p]<b[q]){
                    cout<<count<<endl;
                    break;
                }
            }
        }
    }
}