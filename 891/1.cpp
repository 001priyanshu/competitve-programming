#include "bits/stdc++.h"
using namespace std;
#define lli long long int


void solve(){
   int n;
   cin>>n;
   vector<int>v(n);
   int total=0;
   for(int i=0;i<n;i++){
    cin>>v[i];
    total+=v[i];
   }
   int sum=0;
   for(int i=0;i<n-1;i++){
         sum+=v[i];
         int rem = total-sum;
         if(rem%2==0 && sum%2==0){
            cout<<"YES"<<endl;
            return;
         }
         else if(rem%2!=0 && sum%2!=0){
            cout<<"YES"<<endl;
            return;
         }
   }
   cout<<"NO"<<endl;
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