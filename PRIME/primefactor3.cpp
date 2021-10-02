#include<iostream>
using namespace std;
int primefact(int n){
    if(n<=1) return n;
    while(n%2==0){
        cout<<2<<" ";
        n/=2;
    }
    while(n%3==0){
        cout<<3<<" ";
        n/=3;
    }
    for(int i =5;i*i<=n;i=i+6){
        while(n%i ==0){
            cout<<i<<" ";
            n/=i;
        }
        while(n%(i+2) ==0){
            cout<<i+2<<" ";
            n/=(i+2);
        }
    }
    if(n>3){    //2 and 3 are handled that is why 
        cout<<n<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    primefact(n);

}

// Time complextiy = O(rootn )   the worst case is when n is prime then the four loop will have to run
// up till square root of n , it will run rootn/6 times which is root n time complexity