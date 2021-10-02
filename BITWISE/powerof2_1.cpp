#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==0) cout<<"not power of two";
    n=n&(n-1);
    if(n==0){
        cout<<"power of 2";
    }
    else cout<<"not power of 2";
    }