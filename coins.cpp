#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
      if(n%2==0){
        cout<<"YES"<<endl;
       continue;
      }
      if(k%2==0 || k>n){
        cout<<"NO"<<endl;
       continue;
      
      }
      cout<<"YES"<<endl;
       continue;
      
       
    }
    return 0;
}
