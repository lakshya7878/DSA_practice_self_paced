#include<iostream>
using namespace std;
void insertion_sort(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        for(int j=i+1;j>0;j--){
            if(arr[j-1]>arr[j]){
                swap(arr[j-1],arr[j]);
            }
            else{
                break;
            }
        }
    }
}
int main(){
    cout<<"enter size of arrray"<<endl;
    int n;
    cin>>n;
    int *arr= new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertion_sort(arr,n);
    for(int  i=0;i<n;i++){
        cout<<arr[i];
    }
}