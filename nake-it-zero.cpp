#include "bits/stdc++.h"
using namespace std;
#define lli long long int


void solve(){
  int n;
  cin>>n;
  vector<int>v(n);
  for(int i=0;i<n;i++) cin>>v[i];
 int x=0;
 while(x<=256){
 int ans=0;
    for(int i=0;i<n;i++){
        int temp = (x^v[i]);
        ans=(ans^temp);
    }
 if(ans==0){
    cout<<x<<endl;
    return;
 }
 x++;
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