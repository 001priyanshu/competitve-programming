#include "bits/stdc++.h"
using namespace std;
#define lli long long int


void solve(){
    int x=1;
    for(int i=1;i<=128;i+=i){
        x+=x;
    }
    cout<<x;
}

int main(){
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }


    return 0;
}