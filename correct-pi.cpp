#include "bits/stdc++.h"
using namespace std;

void solve(){
    string s;
    cin>>s;
   string temp="314159265358979323846264338327";
   int i=0;
   while(i<s.size() && i<temp.size() && s[i]==temp[i]) i++;

cout<<i<<endl;
   return;
}

int main(){

    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;

}