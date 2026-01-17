#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        char c;
        cin >> c;
        string s;
        cin >> s;
        ll j=0, ans=0;
        for(ll i=0; i<n; i++){
            if(s[i]==c){
                if(j<i){
                    j=i;
                }
                while(s[j%n]!='g'){
                    j++;
                }
                ans=max(ans, j-i);
            }
        }
        cout << ans << endl;
    }
    return 0;
}