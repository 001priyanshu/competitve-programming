#include "bits/stdc++.h"
using namespace std;
#define lli long long int


void solve(){
   int n;
   cin>>n;
   vector<vector<int>>nums(n);
   for(int i=0;i<n;i++){
    int m;
    cin>>m;
    vector<int>temp(m);
    for(int j=0;j<m;j++) cin>>temp[j];
    nums[i]=temp;
   }
   vector<vector<int>>tt(n,vector<int>(2,0));
   long long total=0;
  int mini=INT_MAX;
   for(int i=0;i<n;i++){
    int f1=INT_MAX;
    int f2=INT_MAX;
    for(int j=0;j<nums[i].size();j++){
        if(f1>=nums[i][j]){
            f2=f1;
            f1=nums[i][j];
        }
        else if(f2>=nums[i][j]) f2=nums[i][j];
    }
    // cout<<i<<" "<<f1<<" "<<f2<<endl;
  
    
    if(f2==INT_MAX){
       tt[i][1]=f1;
       total+=f1;
    }
    else{
          tt[i][0]=f1;
          tt[i][1]=f2;
          total+=f2;
          mini=min(mini,f1);
          
    }
   }
//    cout<<mini<<"**"<<total<<" ";

   
  if(mini==INT_MAX) {
    cout<<total<<endl;
    return;
  }
   long long result=0;
   for(int i=0;i<n;i++){
     if(mini<tt[i][1]) {
        long long newTotal = total-tt[i][1]+mini;
        result=max(result,newTotal);
     }
     else{
        result=max(result,total);
     }
   }
   cout<<result<<endl;
   return;

}

int main(){
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}