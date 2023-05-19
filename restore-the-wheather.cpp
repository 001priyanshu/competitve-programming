#include "bits/stdc++.h"
using namespace std;
#define lli long long int


void solve(){

    int n,k;
    cin>>n>>k;
    vector<int>b(n);
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++) {
        int a;
        cin>>a;
        v.push_back({a,i});
    }
    for(int i=0;i<n;i++) cin>>b[i];
    sort(v.begin(),v.end());
    sort(b.begin(),b.end());

    vector<int>ans(n);
    for(int i=0;i<n;i++){
        ans[v[i].second]=b[i];
    }
    for(int i=0;i<n;i++) cout<<ans[i]<<" ";

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