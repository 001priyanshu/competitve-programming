#include "bits/stdc++.h"
using namespace std;


int helper(int first,int second,int n,int k,vector<vector<int>>&dp){
  
  if(k==1){
        if(first+second==n) return 1;
        return 0;
  }
  if(k<1) return 0;
  if(first+second>n) return 0;
  if(dp[first+second][k]!=-1) return dp[first+second][k];

 return dp[first+second][k] =  helper(second,first+second,n,k-1,dp);
  

  
  
     
}
void solve(){
    int n,k;
    cin>>n>>k;
    long long ans=0;
    vector<vector<int>>dp(n+1,vector<int>(1e5,-1));
    for(int i=0;i<=n;i++){
        for(int j=i;j<=n;j++){
         ans+=  helper(i,j,n,k-2,dp);
         }
    }
    cout<<ans<<endl;
    return;
}

int main(){
    int t;
    cin>>t;
    while ((t--))
    {
        /* code */ 
        solve();
    }
    
}