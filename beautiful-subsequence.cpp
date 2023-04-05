#include "bits/stdc++.h"
using namespace std;
#define lli long long int


void solve(){
   int m;
   cin>>m;
   vector<int>v(m);
   for(int i=0;i<m;i++) cin>>v[i];

   for(int i=1;i<=v.size();i++){
      if(v[i-1]<=i){
        cout<<"YES"<<endl;
        return;
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