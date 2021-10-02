// Brian Kerningam's algorithm

#include<iostream>
using namespace std;
int main(){
    int  n;
    cin>>n;
    int result =0;         // time commplexity is O(set bit count)
    while(n>0){
        n=n&(n-1);
        result++;
    }
    cout<<result;
}