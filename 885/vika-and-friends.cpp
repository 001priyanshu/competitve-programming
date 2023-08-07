#include "bits/stdc++.h"
using namespace std;
#define lli long long int


void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    int x,y;
    cin>>x>>y;
    
    map<pair<int,int>,int>mp,mp2;
    for(int i=0;i<k;i++){
        int a,b;
        cin>>a>>b;
       
        mp[{a,b}]=1;
    }
  
  if(x+1<=n) mp2[{x+1,y}]=1;
  if(x-1>0) mp2[{x-1,y}]=1;
  if(y+1<=m) mp2[{x,y+1}]=1;
  if(y-1>0) mp2[{x,y-1}]=1;


for(auto &it2:mp2){
  int vx =it2.first.first;
  int vy=it2.first.second;
  for(auto &it:mp){
     int x1=it.first.first;
     int y1=it.first.second;
     bool p=0;
   if(x1+1==vx && y1==vy){
   p=1;
   }
    if(x1-1==vx && y1==vy){
   p=1;
   }
    if(x1==vx && y1+1==vy){
   p=1;
   }
    if(x1==vx && y1-1==vy){
   p=1;
   }
   if(p==0){
     cout<<"YES"<<endl;
     return;    
   }
  }
}
  cout<<"NO"<<endl;
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