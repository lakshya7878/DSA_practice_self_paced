#include<iostream>
using namespace std;
int primefact(int n){
    if(n<=1)return n;
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            cout<<i<<" ";
            n=n/i;
        }
    }
    if(n>1)
    cout<<n;
}
int main(){
    int n;
    cin>>n;
    primefact(n);

}