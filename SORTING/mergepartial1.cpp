#include<iostream>
using namespace std;
void merge(int arr[],int n,int l,int h,int mid){
    int *arr1 = new int[mid-l+1];
    int *arr2= new int [h-mid];
    
    for(int x =0;x<=mid-l;x++){
        arr1[x] = arr[x+l];
    }
    for(int y =0;y<=mid-l;y++){
        arr1[y] = arr[mid +1+y];
    }
    int  i = l;
    int   j= mid +1;
        while(i<=mid && j<=h){
            if(arr[i]<=arr[j]){
                i++;
            }
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
                i++;
            }

        }
}
int main(){
    int arr[] = {1,2,7,8,4,5,6};
    merge(arr,7,0,6,3);
    for(int i =0;i<6;i++){
        cout<<arr[i]<<endl;
    }
}