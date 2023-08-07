#include "bits/stdc++.h"
using namespace std;
#define lli long long int


void solve(){

    int n;
    cin>>n;
   vector<int>v(n);
   for(int i=0;i<n;i++){
     cin>>v[i];
   }

   for(int i=0;i<n;i++){
    bool flag=0;
    for(int j=0;j<n;j++){
        for(int k=0;k<n;k++){
            if(i==j || i==k || j==k) continue;
            if(abs(v[j]-v[k])==v[i]) flag=1;
        }
    }
    if(!flag) {
        cout<<v[i]<<endl;
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