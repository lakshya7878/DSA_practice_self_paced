#include<iostream>
using namespace std;
int main(){
    int n;
    int count =0;
    cin>>n;
    while(n>0){
        if(n&1==1){
            count++;      // tc is O(bits in n)
        }
        n=n>>1;
    }
    cout<<count;
}