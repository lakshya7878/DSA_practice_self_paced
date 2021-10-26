#include<iostream>
#include<vector>
using namespace std;
bool isPrime(int n){
    vector<bool> obj(n+1,true);
    for(int i =2;i*i<=n;i++){
        if(obj[i]){
            for(int j=i*i;j<=n;j=j+i){   // j=i*i makes the inner loop faster ...think
                obj[j]= false;
            }
        }
    }
    return obj[n];

}
int main(){
    int n;                          // time complexity  =  O(nloglogn)   no proof provided for calculating tc
    cin>>n;
    cout<<isPrime(n);

}