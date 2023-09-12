#include "bits/stdc++.h"
using namespace std;
#define int long long int


void solve(){
   string s;
   cin>>s;
   int n=s.size();
   string temp="";
   for(int i=0;i<n;i++){
    if(s[i]==')'){
        temp+='(';
        temp+=')';
    }
    else{
        temp+='(';
        temp+=')';
    }
   }
   bool flag1=1,flag2=1;
   for(int i=0;i<temp.size();i++){
    string str = temp.substr(i,n);
    if(str==s){
        flag1=0;
        
    }
   }
   string temp2="";
   if(flag1==0){
    int x=n;
    while(x--){
    temp2+='(';
    }
    x=n;
    while(x--){
         temp2+=')';
    }

   }
   for(int i=0;i<temp2.size();i++){
    string str = temp2.substr(i,n);
    if(str==s){
        flag2=0;
        
    }
   }
   if(flag1){
    
   cout<<"YES"<<endl;
   cout<<temp<<endl;
   return;
   }
   if(flag2){
    
   cout<<"YES"<<endl;
   cout<<temp2<<endl;
   return;
   }
   cout<<"NO"<<endl;

}

int32_t main(){
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}