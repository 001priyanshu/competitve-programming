#include "bits/stdc++.h"
using namespace std;
#define int  long long int


void solve(){
    int n;
    cin>>n;
    cout<<7<<" "<<11<<" ";
    int first=7,second=11;
    int i=2;
    int count=12;
    while(i<n){
       int sum=first+second;
       if(((3*count)%sum)!=0){
        cout<<count<<" ";
        first=second;
        second=count;
        i++;
       }
       count++;

    
    }
    cout<<endl;
    return;
   
}

int32_t main(){
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}