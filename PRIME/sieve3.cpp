#include<iostream>
#include<vector>
using namespace std;
void isPrime(int n){
    vector<bool> obj(n+1,true);
    for(int i =2;i*i<=n;i++){
        if(obj[i]){
            for(int j=i*i;j<=n;j=j+i){   // j=i*i makes the inner loop faster ...think
                obj[j]= false;
            }
        }
    }
    for(int i =2;i<=n;i++){      
        if(obj[i]){
            cout<<i<<" ";
        }
    }

}
int main(){
    int n;                          // time complexity  =  O(nloglogn)   no proof provided for calculating tc
    cin>>n;
    isPrime(n);

}