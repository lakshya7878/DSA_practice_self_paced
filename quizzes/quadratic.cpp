#include<iostream>
#include<math.h>
using namespace std;
void quadratic(int a,int b,int c){
    int D = b*b -4*a*c;
    int rootD = sqrt(D);
    if(D>0){
        cout<<" Real and Different roots :";
        cout<<(-b + rootD)/(2*a)<<" "<<(-b - rootD)/(2*a)<<endl;
    }
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    quadratic(a,b,c);
}