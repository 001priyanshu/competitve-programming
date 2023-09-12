#include "bits/stdc++.h"
using namespace std;
#define lli long long int


void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    if(c%2!=0) a++;
    if(a>b){
        cout<<"First"<<endl;
        return;
    }
    cout<<"Second"<<endl;
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