#include "bits/stdc++.h"
using namespace std;
#define lli long long int


void solve(){
   lli n;
   cin>>n;
   lli arr[n];
   lli minOdd=LLONG_MAX;
   lli minEven=LLONG_MAX;
   for(lli i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]%2==0) minEven=min(minEven,arr[i]);
    else minOdd=min(minOdd,arr[i]);
   }

   lli a=0;
   lli b=0;
    if(minOdd==LLONG_MAX || minEven==LLONG_MAX){
        cout<<"YES"<<endl;
        return;
    }
   for(lli i=0;i<n;i++){
     if(arr[i]%2!=0){
        if(minOdd-arr[i]>0) a=1;
        if(minEven-arr[i]>0) b=1;
     }
     

   }
   if(a || b) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
   return;
}

int main(){
    lli t=1;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}