#include<iostream>
int power(int x,int n){
    int res =1;
    while(n>0){
        if(n%2!=0){
        res = res*x;       // binary is 1 hence we are  multiplying res                      
        }                  // TC is O(logn)  space complexity O(1)
        n/=2;
        x=x*x;

    }
    return res;
}
using namespace std;
int main(){
        int x,n;
        cin>>x>>n;
        cout<<power(x,n);
}