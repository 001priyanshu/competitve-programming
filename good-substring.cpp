#include "bits/stdc++.h"
using namespace std;
#define lli long long int




void solve(){
    int k, n;
    cin>>k>>n;
    int last=1;
    

  
int diff=0;
   while(k--){
    int curr = last+diff;
      int rem  = n-curr;
      if(rem>=k){
        cout<<curr<<" ";
        last=curr;
        diff++;
        
      }
      else{
        k++;
        while(k--){
            cout<<last+1<<" ";
            last++;
        }
        break;
      }
    
   }

   cout<<endl;
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