#include<iostream>
using namespace std;
void bubblesort(int arr[],int n){
    bool swapped ;
    for(int i=0;i<n-1;i++){
            swapped = false ;
        for(int j=1;j<n-i;j++){
            if(arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            swapped = true;
            }
        }
        if(swapped == false ){
            break;
        }
    }
}
int main(){
    int arr[]= {1,4,6,2,6};
    bubblesort(arr,5);
    for(int i =0;i<5;i++){
        cout<<arr[i];
    }
}