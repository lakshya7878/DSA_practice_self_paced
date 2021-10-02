#include<iostream>
#include<math.h>
using namespace std;
bool isPrime(int i){   //O(n)
    if(i==1)
        return false;
    for(int p=2;p*p<=i;p++){
        if(i%p==0){
            return false;
        }
    }
    return true;
    
}
int primefact(int n){
    for(int i =2;i<=n;i++){   //O(n)
        int x =i;
        if(isPrime(i)){
            while(n%x==0){      //O(logn)
                cout<<i<<" ";
                x = x*i;
            }

        }                           //tc = O(n^sq logn)
    }
}
int  main(){
        int n;
        cin>>n;
        primefact(n);
}