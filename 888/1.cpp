#include "bits/stdc++.h"
using namespace std;



void solve(){
    int n,m,k,H;
    cin>>n>>m>>k>>H;
    vector<int>height(n);
    for(int i=0;i<n;i++) cin>>height[i];
    long long ans=0;
    for(int i=0;i<n;i++){
        int diff = abs(H-height[i]);
        bool flag=0;
        for(int j=1;j<=m;j++){
            if(flag) break;
            for(int x=j+1;x<=m;x++){
                if(abs(x*k-j*k)==diff){
                    ans++;
                    flag=1;
                    break;
                }
            }
        }
    }

    cout<<ans<<endl;
    return;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}