#include "bits/stdc++.h"
using namespace std;
#define lli long long int


bool check(vector<int>&v){
    int n=v.size();
    for(int i=0;i<n-1;i++){
        if(v[i]>v[i+1]) return 0;
    }
    return 1;
}

bool doo(int x,vector<int>v){
    for(int i=0;i<v.size();i++){
        v[i]=abs(v[i]-x);
    }
   return (check(v));
}
void solve(){
   int n;
   cin>>n;
   vector<int>v(n);
   int mini=1e8+1;
   int maxi=0;
   for(int i=0;i<n;i++) {
    cin>>v[i];
    mini=min(mini,v[i]);
    maxi=max(maxi,v[i]);
   }

   if(check(v)){
    cout<<0<<endl;
    return;
   }

   
   if(doo(mini-1,v)){
    cout<<mini-1<<endl;
    return;
   }

    
if(doo(maxi+1,v)){
    cout<<maxi+1<<endl;
    return;
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