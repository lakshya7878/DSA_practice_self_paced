#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l,int mid,int r){
    int len1 = mid - l +1;
    int len2 = r-mid;
    int arr1[len1];
    int arr2[len2];
    for(int p = 0 ;p<len1;p++){
        arr1[p] = arr[l+p];
    }
    for(int q=0;q<len2;q++){
        arr2[q] = arr[mid+q+1];
    }
    int i=0;
    int j=0;
    int k=l;
    while(i<len1 && j<len2){
        if(arr1[i]<=arr2[j]){
            arr[k] = arr1[i];
            k++;
            i++;
        }
        else {
            arr[k] = arr2[j];
            k++;
            j++;
        }
    }
    while(i<len1){
        arr[k] = arr1[i];
        k++;
        i++;
    }
    while(j<len2){
        arr[k] = arr2[j];
        k++;
        j++;
    }
   
   
}




void mergesort(int arr[],int l, int r){
    if(l<r){
        int mid = (l+r)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
}
int main(){
    int arr[7] = {1,5,3,7,8,9,4};
    mergesort(arr,0,6);
     for(int q=0;q<7;q++){
        cout<<arr[q]<<endl;
    }
}