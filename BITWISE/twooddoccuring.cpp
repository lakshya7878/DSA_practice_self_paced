#include<iostream>
using namespace std;
int main(){
    int arr[] ={1,1,2,2,2,2,3,2,5,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int XOR = 0;
    for(int i =0;i<size;i++){
        XOR = XOR^arr[i];
    }
    int res1 =0,res2 =0;
    XOR = (XOR)& ~(XOR -1);
    for(int i=0;i<size;i++){
        if((XOR&arr[i])!=0){       // the brackets are important
            res1 = res1^arr[i];
        }
        else res2 = res2^arr[i];
    }
        cout<<res1<<" "<<res2;
}