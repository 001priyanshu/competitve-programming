// #include "bits/stdc++.h"
// using namespace std;
// #define lli long long int



// int main(){
    
//     int n,m;
//     cin>>n>>m;
//     lli mod=1e9+7;
//   unordered_set<int>st;
//     for(int i=0;i<n;i++){
//         lli hash=0;
//         lli p=29;
//         lli pow=1;
//         string temp;
//         cin>>temp;
//         for(int j=0;j<temp.size();j++){
//             hash=(hash+(temp[j]-'a'+1)*pow)%mod;
//             pow=(pow*p)%mod;
//         }
//         st.insert(hash);


//     }

//     for(int i=0;i<m;i++){
//         string temp;
//         cin>>temp;
//         lli hash=0;
//         lli sum=0;
//         lli p=29;
//         lli pow=1;
//         vector<int>hashCode(temp.size());
//         for(int j=0;j<temp.size();j++){
//            hash=(hash+(temp[j]-'a'+1)*pow)%mod;
//             pow=(pow*p)%mod;
//             hashCode[j]=hash;
//             sum+=hash;
//         }
//        pow=1;
//             bool flag=0;
//         for(int j=0;j<temp.size();j++){
//             for(int c=0;c<26;c++){
//                 if(c==temp[j]-'a') continue;
//                lli newHash = ((c+1)*pow)%mod; 

//                if(j!=0) newHash+=hashCode[j-1];
//                if(st.find(newHash)!=st.end()){
//                 flag=1;
//                 cout<<"YES"<<endl;
//                break; 
//                } 
               
              
//             }
//             if(flag==1){
//                 break;
//             }
//              pow=(pow*p)%mod;

//         }

//             if(flag==0){
//                cout<<"NO"<<endl;
//             }

//     }

// return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> memory(n);
    for (int i = 0; i < n; i++) {
        cin >> memory[i];
    }

    for (int i = 0; i < m; i++) {
        string s;
        cin >> s;

        bool found = false;
        for (string t : memory) {
            if (t.size() != s.size()) {
                continue;
            }

            int diffCount = 0;
            for (int j = 0; j < s.size(); j++) {
                if (t[j] != s[j]) {
                    diffCount++;
                }

                if (diffCount > 1) {
                    break;
                }
            }

            if (diffCount == 1) {
                found = true;
                break;
            }
        }

        if (found) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}