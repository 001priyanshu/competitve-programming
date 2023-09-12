#include "bits/stdc++.h"
using namespace std;
#define int  long long int


void solve(int n,vector<int>&nums){
  
   for(int i=0;i<n;i++) cin>>nums[i];
   vector<int>dp(n,INT_MAX);
   dp[0]=0;
  for(int i=1;i<n;i++){
         dp[i]=dp[i-1]+abs(nums[i]-nums[i-1]);
         if(i-3>=0) dp[i]=min(dp[i],dp[i-3]+abs(nums[i]-nums[i-3]));
        //  cout<<dp[i]<<" ";
  }
  
  
  return dp[n-1];
  }

int32_t main(){
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }


    return 0;
}