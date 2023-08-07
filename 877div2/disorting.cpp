#include "bits/stdc++.h"
using namespace std;



void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    vector<int>mini(n);
    mini[n-1]=INT_MAX;
    for(int i=n-2;i>=0;i--){
        mini[i] = min(mini[i+1],v[i+1]);
    }
    int maxi=INT_MIN;
    int ans=INT_MAX;
    for(int i=0;i<n-1;i++){
          maxi=max(v[i],maxi);
          if(maxi>mini[i]){
              cout<<0<<endl;
              return;
          }
          else if(maxi==mini[i]){
            ans=min(ans,1);
          }
          else{
            int temp = mini[i]-maxi;
            ans=min(ans,(temp/2)+1);
          }
    }

    cout<<ans<<endl;
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}