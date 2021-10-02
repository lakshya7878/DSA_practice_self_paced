#include<iostream>
#include<vector>
using namespace std;
void isprime(int n){
    vector<bool> obj(n+1,true);
    for(int i =2;i*i<=n;i++){
        if(obj[i]){
            for(int j=i*2;j<=n;j=j+i){
                obj[j] = false;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(obj[i]){
            cout<<i<<" ";
        }
    }

}
int main(){
    int n;
    cin>>n;
    isprime(n);

}