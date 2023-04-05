#include "bits/stdc++.h"
using namespace std;
#define lli long long int


void solve(){
  string s;
  cin>>s;
  int a=s[0]-'0';
  int b=s[2]-'0';
  cout<<a+b<<endl;
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