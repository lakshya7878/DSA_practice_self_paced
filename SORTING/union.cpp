#include<bits/stdc++.h>
using namespace std;
void unnion(int arr1[],int arr2[],int n,int m){
    vector<int> vec;
    int i=0,j=0;
    while(i+j<m+n){
        if(arr1[i]==arr1[i-1]){           // for the cases [2,2] and [2,2] and also we  need to do this only for arr1 not for arr2 cuz done with one of them it will work for sure
            i++;
        }
        if(arr2[j]==arr2[j-1]){
            j++;
        }
        if(arr1[i]<arr2[j]){
            
            vec.push_back(arr1[i]);
            i++;
        }
        if(arr1[i]>arr2[j]){  // no need to use vector so AS is  O(1) and TC = O( m+n)
            
            vec.push_back(arr2[j]);
            j++;
        }
        if(arr1[i]==arr2[j]){
            vec.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<endl;
    }

}
int main(){
    int arr1[] ={1,2,2,3,3,5};
    int arr2[]={2,2,6,7,8};
    unnion(arr1,arr2,6,5);

}