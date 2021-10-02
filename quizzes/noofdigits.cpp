#include<iostream>
#include<math.h>
using namespace std;
void digits(){
    int N = 178232;
    int D;
    D = floor(log10(N) +1 );
    cout<<D;
}
int main(){
    digits();
}