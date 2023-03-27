    #include "bits/stdc++.h"
    using namespace std;

    void doInver(string &s,int i,int j){
        while(i<=j){
            if(s[i]=='0') s[i]='1';
            else s[i]='0';

            i++;
        }
    }
    void solve(){
        int n;
        cin>>n;
        string s;
        cin>>s;

        int i=0;
        int j=s.size()-1;
    
        while(i<j && s[i]==s[j]){
            i++;
            j--;
        }
        //    cout<<s<<" "<<i<<" "<<j<<endl;
        while(i<j && s[i]!=s[j]){
            i++;
            j--;
        }
         while(i<j && s[i]==s[j]){
            i++;
            j--;
        }
    

    if(i>=j){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    //    string temp=s;
    //    reverse(temp.begin(),temp.end());

    //    if(temp==s){
    //     cout<<"Yes"<<endl;
    //    }
    
    return;

    }

    int main(){
        int t;
        cin>>t;
        while(t--){
            solve();
        }
    }