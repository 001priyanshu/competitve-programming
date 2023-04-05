    #include "bits/stdc++.h"
    using namespace std;
    #define lli long long int
    



    int main(){
        int t=1;
        cin>>t;
        
        
        vector<int>dp(1e4+1,-1);
        

        dp[1]=1;
        for(int i=1;i<=10000;i++){
        if(dp[i]!=-1){
            
           if(2*i+1<=1e4 && dp[2*i+1]==-1) {

            dp[2*i+1]=2;
           }
           if(2*i-1<=1e4 && dp[2*i-1]==-1) {
            dp[2*i-1]=1;
           }
        }
        }
       
        while(t--){
            int n;
            cin>>n;
            if(n>1e4) {
                cout<<-1<<endl;
                continue;
            }
            if(dp[n]==-1){
                cout<<-1<<endl;
                continue;
            }
            vector<int>ans;
            int k=n;
            while(k>1){
                ans.push_back(dp[k]);
                if(dp[k]==2){
                    k=(k-1)/2;
                }
                else{
                    k=(k+1)/2;
                }
            }
            if(ans.size()>40){
                cout<<-1<<endl;
                continue;
            }
            cout<<ans.size()<<endl;
            reverse(ans.begin(),ans.end());
            for(auto &it:ans) cout<<it<<" ";
        cout<<endl;
        
        }


        return 0;
    }