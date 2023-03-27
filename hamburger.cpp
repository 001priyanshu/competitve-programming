#include "bits/stdc++.h"
using namespace std;

 


 bool check(long long int mid,long long int rb,long long int rs,long long int rc,long long int nb,long long int ns,long long int nc,long long int pb,long long int ps,long long int pc,long long int rubles){
 
       long long int tb = rb*mid;
       long long int ts = rs*mid;
       long long int tc = rc*mid;

       tb -= nb;
       ts -= ns;
       tc -= nc;

       if(tb<0) tb=0;
       if(ts<0) ts=0;
       if(tc<0) tc=0;


       long long int rub_b = pb*tb;
       long long int rub_s = ps*ts;
       long long int rub_c = pc*tc;

       long long int total_rub = rub_b+rub_c+rub_s;

       if(total_rub<=rubles) return 1;


       return 0;

 }
void solve(){
    string rec;
    cin>>rec;
    long long int nb,ns,nc;
    cin>>nb>>ns>>nc;
    long long int pb,ps,pc;
    cin>>pb>>ps>>pc;

    long long int rubles;
    cin>>rubles;

    long long int rb=0,rs=0,rc=0;
    for(long long int i=0;i<rec.size();i++){
        if(rec[i]=='B') rb++;
        else if(rec[i]=='S') rs++;
        else if(rec[i]=='C') rc++;
    }

    long long int low=0;
    long long int high = 1e14;
   long long int ans=0;
    while(low<=high){
        long long int mid = (high-low)/2 + low;
        if(check(mid,rb,rs,rc,nb,ns,nc,pb,ps,pc,rubles)){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }


    cout<<ans<<endl;
    return;

}

 int main()
{

    solve();

    return 1;
}