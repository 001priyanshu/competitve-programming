#include "bits/stdc++.h"
using namespace std;
#define lli long long int


void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
   int i=0;
  int idx=0;
  while(i<n){
    if(s[i]<=s[idx]){
        idx=i;
    }
    i++;
  }
  string ans = s[idx]+ s.substr(0,idx) + s.substr(idx+1,n-idx);
  cout<<ans<<endl;

   
}

int main(){
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}