#include<iostream>
using namespace std;
int main(){
    int a ,b;
    cin>>a>>b;
    int temp = max(a,b);
    int mini = min(a,b);
    int sect = temp;
    while(temp % mini != 0){
    if(temp% mini==0){
        break;
    }
    else
    temp = sect + temp;
    }
    cout<<temp;
}