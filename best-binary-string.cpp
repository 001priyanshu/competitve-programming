#include "bits/stdc++.h"
using namespace std;
#define lli long long int


void solve(){

        string s;
        cin>>s;
        int i=0;
        int j=s.size()-1;
        while(i<s.size() && (s[i]=='0' || s[i]=='?')){
            s[i]='0';
            i++;
        }
        while(j>=i && (s[j]=='1' || s[j]=='?')){
            s[j]='1';
            j--;
        }
        while(i<=j){
            int flag=1;
            while(i<=j && s[i]=='?'){
                flag=0;
                s[i]=s[i-1];
                i++;
            }
            if(flag) i++;
        }
        cout<<s<<endl;
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