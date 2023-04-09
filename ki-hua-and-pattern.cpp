#include "bits/stdc++.h"
using namespace std;
#define lli long long int


void solve(){
   int n,k;
   cin>>n>>k;
   vector<vector<int>>v(n,vector<int>(n));
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        int temp;
        cin>>temp;
        v[i][j]=temp;
    }
   }
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(k<0) {
            cout<<"NO"<<endl;
            return;
        }
        int t1=v[i][j];
        int t2=v[n-i-1][n-j-1];
        if(t1!=t2){
            v[i][j]=1-t1;
            k--;
        }
    }
   }

   if(k%2==0 || n%2!=0){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }
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