#include "bits/stdc++.h"
using namespace std;
#define int  long long int


void solve(){
   int n;
   cin>>n;
   vector<vector<int>>ans;
   for(int i=0;i<n;i++){
    int x;
    cin>>x;
    vector<int>temp;
    for(int j=0;j<x;j++){
       int p;
       cin>>p;
       temp.push_back(p);
    }
    ans.push_back(temp);
   }
   
}

int32_t main(){
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}