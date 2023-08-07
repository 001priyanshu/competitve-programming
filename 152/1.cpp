#include "bits/stdc++.h"
using namespace std;
#define lli long long int


void solve(){
   
   int a,b,c;
   cin>>a>>b>>c;
   
   int ans=3;
   a-=2;
   if(b>0) b--;
   else c--;
   ans+=(min(a,(b+c))*2);
   
   cout<<ans<<endl;
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