#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int c = 1;
        int N;
        int temp1=0;
        int temp2=0;
        int sum  =0;
        int count1 =1;
        int count2  =1;
        cin>>N;
        char S[N];
        for(int i=0;i<N;i++){
            cin>>S[i];
        }
        for(int j=0;j<N;j++){
            if(S[j]=='1'){
                sum = sum +0;
                continue;
            }
            else {
                temp1 = j-1;
                temp2 = j+1;
                while(temp1>=0&&S[temp1]!='1'){
                    count1++;
                    if(S[temp1]=='1'){
                        break;
                    }
                    temp1--;
                    
                    
                    

                }
                if(temp1<0 || temp1 ==N){
                    count1 = INT_MAX;
                }

                while(temp2<N&&S[temp2] !='1'){
                    count2++;
                    if(S[temp2]=='1'){
                        break;
                    }
                    temp2++;
                    
                   
                }
                if(temp2<0 || temp2==N){
                    count2 = INT_MAX;
                }
                
                sum = sum + min(count1,count2);
                cout<<count1<<" "<<count2<<endl;
                count1 = 1;
                count2 =1;
            }
        }
        
        c++;
    }
}