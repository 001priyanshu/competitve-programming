#include "bits/stdc++.h"
using namespace std;
#define lli long long int

vector<int>solve(int temp,vector<int>&v,vector<int>&ct){
    vector<int>ans;
  for(auto &it:v){
    if(temp%it==0) ans.push_back(it);
    else ct.push_back(it);
  }
  return ans;
}

void solve(){
   int n;
   cin>>n;
   vector<int>v(n);
   for(int i=0;i<n;i++) cin>>v[i];
   for(int i=0;i<n;i++){
    vector<int>b;
    vector<int>c=solve(v[i],v,b);
    if(c.size()>=1 && b.size()>=1){
          cout<<c.size()<<" "<<b.size()<<endl;
          for(auto &it:c) cout<<it<<" ";
          cout<<endl;
          for(auto &it:b) cout<<it<<" ";
          cout<<endl;
          return;
    }

   }
   cout<<-1<<endl;
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