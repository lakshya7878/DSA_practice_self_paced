#include<iostream>
using namespace std;
void selectsort(int arr[],int n){
    
    for(int i=0;i<n-1;i++){
        int min_ind =i;            // assuming the one we are on is the minimum
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_ind]){ 
                min_ind = j;        // changing to the instantaneous minimum  again and again
            }
        }
        swap(arr[i],arr[min_ind]);  //basically assuming min and then finding the  actual min and then doing it again for the whole array so that it is sorted
    }
}
int main(){
    int arr[] = {1,66,2,3,6,3,1};
    int n =7;
    selectsort(arr,n);
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}