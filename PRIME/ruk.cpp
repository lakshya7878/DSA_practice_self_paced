#include <iostream>
using namespace std;

int main() {
	int g1,g2,s1,s2,b1,b2;
	int T;
	cin>>T;
	while(T--){
	    cin>>g1>>s1>>b1;
	    cin>>g2>>s2>>b2;
	    if((g1+s1+b1)>(g2+s2+b2)){
	        cout<<1;
	    }
	    else 
	    cout<<2;
	}
	return 0;
}
