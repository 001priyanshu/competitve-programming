#include "bits/stdc++.h"
using namespace std;
#define lli long long int


void solve(){
   int x,k;
   cin>>x>>k;
   if(x%k!=0){
    cout<<1<<endl;
    cout<<x<<endl;
   }
   else{
    cout<<2<<endl;
    cout<<x-1<<" "<<1<<endl;
   }
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