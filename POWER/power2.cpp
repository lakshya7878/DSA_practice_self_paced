#include<iostream>
using namespace std;
int power(int x, int n){
    if(n==0) return 1;
    int temp = power(x,n/2);
    temp = temp * temp;               //TC of this one will be O (logn)                                 
    if(n%2==0) return temp;            // AUXILLARY SPACE OF O(log n )   height  of the tree in both tc and as
    else return temp*x;

}
int main(){
    int x, n;
    cin>>x>>n;
    cout<<power(x,n);
}