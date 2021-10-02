#include<iostream>
using namespace std;
int main(){
    // int n,k;
    // cin>>n>>k;
    // n=n>>(k-1);
    
    // if(n&1==1){
    //     cout<<"set bit";}
    // else{
    //     cout<<"unset bit";

    // }

    int n,k;
    cin>>n>>k;
    if(n&1<<(k-1)!=0){
        cout<<"yes";

    }
    else{
        cout<<"no";
    }
    
    
}