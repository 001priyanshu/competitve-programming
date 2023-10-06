#include "bits/stdc++.h"
using namespace std;
#define int  long long int


void solve(){
   int n;
   cin>>n;
   vector<int>arr(n);
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   int last=1;
   int ans=-1;
   int i=0;
   while (i<n)
   {
    if(last!=arr[i]){
        ans=last;
        last++;
        i++;
    }
    else{
        last++;
    }
    
   }
   cout<<ans<<endl;
   return;
   
}

int32_t main(){
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}