#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    int even =0;
	    int odd =0;
	    int count =0;
	    int arr[N];
	    int m =INT_MAX;
	    for(int i=0;i<N;i++){
	        cin>>arr[i];
	        if(arr[i]%2==0){
	            even++;
	        }
	        else{
	            odd++;
	        }
	    }
	    if(odd==0){
	        
	        for(int i=0;i<N;i++){
	        while(arr[i]!=1){
	            arr[i] = arr[i]/2;
	            count++;
	        }
	       m = min(m,count);
	        }
	         cout<<m<<endl;
	    }
	    else if(even ==0){
	        cout<<0<<endl;
	    }
	    else{
	        cout<<0<<endl;
	    }
	}
	return 0;
}