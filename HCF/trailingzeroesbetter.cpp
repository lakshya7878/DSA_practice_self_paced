#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int d =5;
    int count =0;
    int temp =0;
    while(n>=d){
        temp = floor(n/d);
        d=d*5;
        count = temp + count;
        

    }
    cout<<count;
    //
}