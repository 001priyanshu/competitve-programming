#include "bits/stdc++.h"
using namespace std;
#define lli long long int


void solve(){
    lli n,c,d;
    cin>>n>>c>>d;
    unordered_map<lli,lli>m;
    vector<lli>v;
    lli ans=INT_MAX;
    lli minAns=0;
    for(lli i=0;i<n;i++) {
        lli x;
        cin>>x;
        m[x]++;
    }
    lli maxAns=n*c+d; 
   for(auto &it:m){
    minAns+=(it.second-1)*c;
    v.push_back(it.first);


   }
   sort(v.begin(),v.end());
  lli  i=0;
  lli last=0;
  lli lastAns=0;
//   cout<<minAns<<" *";
  while(i<v.size()){
    // cout<<v[i]<<" ";
    lli temp = lastAns + (v[i]-last-1)*d + (v.size()-i-1)*c;
    lastAns+=(v[i]-last-1)*d ;
    last=v[i];
    ans=min(ans,temp+minAns);
    if(ans>=temp+minAns){
        ans=temp+minAns;
    }
    else break;
    i++;

  }
  cout<<min(ans,maxAns)<<endl;
  return;
  
   
}

int main(){
    lli t=1;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}