#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    int c = 1;
    int ans = 1;
    while(T--){
        
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

                while(temp1>=0 && temp2<N){
                    if(S[temp1]=='1'){
                        ans = count1;
                        break;
                    }
                    if(S[temp1]!='1'){
                        count1++;
                        temp1--;
                    }
                    if(S[temp2]=='1'){
                        ans = count2;
                        break;
                    }
                    if(S[temp2]!='1'){
                        count2++;
                        temp2++;
                    }
                }
                   if(temp1<0 ){
                    count1 = INT_MAX;
                }
                if( temp2==N){
                    count2 = INT_MAX;
                }
                // while(temp1>=0&&S[temp1]!='1'){
                //     count1++;
                //     temp1--;
                // }
             

                // while(temp2<N&&S[temp2] !='1'){
                //     count2++;
                    
                //     temp2++;}
                
                // cout<<count1<<" "<<count2<<endl;
                
                sum = sum + ans;
                
                count1 = 1;
                count2 =1;
            }
        }
        cout<<"Case"<<" "<<'#'<<c<<':'<<" "<<sum<<endl;
        c++;
    }
}