#include<iostream>
using namespace std;
int pow(int x,int n){
    int res =1;
    
    for(int i=0;i<n;i++){
        res = res*x;
    }
    return res;
}
int main(){
    int n,x;
    cin>>x>>n;
    cout<<pow(x,n);
}