#include "bits/stdc++.h"
using namespace std;
#define lli long long int


void solve(){
    int x;
    cin>>x;
    vector<int>ans;
   
    int temp=x;
    int num = x;
    int i=10;
    while(1){
        int n1 = num/i;
        int n2 = num%i;
        

        i=i*10;

    }


    cout<<temp<<endl;
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