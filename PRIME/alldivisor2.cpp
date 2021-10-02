#include<iostream>
using namespace std;
void divisors(int n){
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
            if(i!=(n/i)){    //this will prevent from printing  5,5 in case of 25 . it iwll only print 5 one time
                cout<<n/i<<" "; 
            }

        }
    }
}
int main(){
    int n;
    cin>>n;
    divisors(n);   // time complexity is root n but still the output is unsorted so check for 3rd file now

}