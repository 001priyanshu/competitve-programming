#include "bits/stdc++.h"
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    unordered_map<char, int> m;
    // int smallC[26]
    vector<int>small(26,0);
    vector<int>cap(26,0);
    int i = 0;
    int ans = 0;
    while (i < n)
    {
       if(s[i]>=97){
        small[s[i]-'a']++;
       }
       else{
        cap[s[i]-'A']++;
       }

        i++;
    }

   i=0;
   for(int i=0;i<26;i++){
    // cout<<'a'+i<<" "<<small[i]<<" "<<cap[i]<<endl;
   }
   while(i<26){

        ans+=min(small[i],cap[i]);
    if(small[i]>=cap[i]){
        small[i]-=cap[i];
        cap[i]=0;
    }
    else{
        cap[i]-=small[i];
        small[i]=0;
    }
    i++;
   }


    i=0;
    while(i<26){
        int t=small[i]/2;
        if(t>0 && k>0){
            if(t>k){
                ans+=k;
                k=0;
            }
            else{
                ans+=t;
                k-=t;
            }
        }

        i++;
    }
    i=0;
     while(i<26){
        int t=cap[i]/2;
        if(t>0 && k>0){
            if(t>k){
                ans+=k;
                k=0;
            }
            else{
                ans+=t;
                k-=t;
            }
        }

        i++;
    }


    cout << ans << endl;

    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}