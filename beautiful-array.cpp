#include "bits/stdc++.h"
using namespace std;

int getGCD(int a, int b)
{
    return b == 0 ? a : getGCD(b, a % b);   
}
bool checkB(int arr[],int n){
    
   for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        int gcd = getGCD(arr[i],arr[j]);

        if(gcd==1 || gcd==2) return 1;
    }
   }

    return 0;
}
void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];



    if(checkB(arr,n)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    // cout<<getGCD(143,1941);


    return 0;
}