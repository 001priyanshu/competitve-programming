#include "bits/stdc++.h"
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>v1(n),v2(n);
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v1[i]=a;
        v2[i]=a;
    }
    sort(v2.begin(),v2.end());
    for(int i=0;i<n;i++){
        if(v1[i]%2!=v2[i]%2){
            cout<<"NO"<<endl;
            return;
        }
    }

    cout<<"YES"<<endl;
    return;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}