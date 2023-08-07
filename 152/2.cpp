#include "bits/stdc++.h"
using namespace std;
#define lli long long int

bool cmp1(pair<int,pair<int,int>>&a,pair<int,pair<int,int>>&b){
   if(a.second.first==0 && b.second.first==0){
        return a.second.second<b.second.second;
   }
   if(a.second.first==0) return 1;
   return 0; 
   
}
bool cmp2(pair<int,pair<int,int>>&a,pair<int,pair<int,int>>&b){

   if(a.second.first!=b.second.first) return a.second.first>b.second.first;
   return a.second.second<b.second.second; 
   
}


void solve(){
    int  n,k;
    cin>>n>>k;
    vector<pair<int,pair<int,int>>>v(n);
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v[i] = {a,{a%k,i}};
    }
    sort(v.begin(),v.end(),cmp1);
    
    for(auto &it:v){
       if(it.second.first==0) cout<<it.second.second+1<<" ";
    }
    sort(v.begin(),v.end(),cmp2);
    for(auto &it:v){
       if(it.second.first!=0) cout<<it.second.second+1<<" ";
    }
    cout<<endl;

   
}

int main(){
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}