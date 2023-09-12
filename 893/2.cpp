#include "bits/stdc++.h"
using namespace std;
#define lli long long int


void solve(){
    int n,m,d;
    cin>>n>>m>>d;
    vector<int>seller(m);
    for(int i=0;i<m;i++) cin>>seller[i];

  seller.push_back(0);
    sort(seller.begin(),seller.end());
     map<int,int>mp;
    int ans=0;
    for(int i=1;i<m;i++){
        ans+=((seller[i]-seller[i-1]-2)/d)+1;
    }



    

   
}

int main(){
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}