#include "bits/stdc++.h"
using namespace std;
#define lli long long int


  
void solve(){
   int n;
   cin>>n;
   vector<int>v(n,0);
   v[0]=1;
   int k=1;
   set<int>st;
   st.insert(1);
   for(int i=2;i<=n;i++){
    
    int start=i;
    while(start<=n){
        
       if(st.find(start)==st.end()) v[k++]=start;
       st.insert(start);
        start=start*2;
    }
   


   }
   for(int i=0;i<n;i++) cout<<v[i]<<" ";
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