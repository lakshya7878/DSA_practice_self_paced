#include<iostream>
using namespace std;
void intersection(int arr1[],int arr2[], int p,int q){
  int i=0;
  int j=0;
  while(i<p && j<q){
    if(i>0&&arr1[i]==arr1[i-1]){
      i++;
    }                              
    if(arr1[i]<arr2[j]){
      i++;
    }
    if(arr1[i]>arr2[j]){
      j++;
    }
    if(arr1[i]==arr2[j]){
      
      
      cout<<arr1[i]<<endl;
      
      i++;
      j++;
    }
  }
}
int main(){
  int arr1[]={2,2,3,3,4,4};
  int arr2[]={2,3,3,4,5,5};
  intersection(arr1,arr2,6,6);
  
}