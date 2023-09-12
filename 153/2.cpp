#include "bits/stdc++.h"
using namespace std;
#define int  long long int


void solve(){
    int m,k,ak,a1;
    cin>>m>>k>>a1>>ak;
    
   
     int x = m/k;
     if(ak>x) m-=x*k;
     else m-=ak*k;

   
   m-=a1;
//    cout<<m<<"**";
    if(m<0) m=0;
 if(m==0){
    cout<<0<<endl;
    return;
 }
int sum1=INT_MAX,sum2=INT_MAX;
int m1=m,m2=m;
   x=m/k;
   int exceed = (x+1)*k-m;

   if(a1>=exceed){
       m1=m1-((x+1)*k)+exceed;
       sum1=x+1;
   }
   
   m2=m2-x*k;
   sum2=x;
   
   if(m1<0) m1=0;
   if(m2<0) m2=0;
   sum2+=m2;
  if(sum1!=INT_MAX) sum1+=m1;
   cout<<min(sum1,sum2)<<endl;
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