// Look up Table method    best method
// time complexity is O(1)
#include<iostream>
using namespace std;
void initialize(int table[]){
    table[0] = 0;
    for(int i=0;i<256;i++){
        table[i] = (i&1) + table[i/2];
    }

}
int setbit(int n,int table[]){
    int result =0;
    for(int i=0;i<4;i++){
        result = result + table[n& 0xff];
        n=n>>8;

    }
    return result;
}
int main(){
    int n;
    cin>>n;
    int table[256];
    initialize(table);
    cout<<setbit(n,table);

}