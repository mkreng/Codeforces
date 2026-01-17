#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        vector<ll> s(k);
        for(ll i=0; i<k; i++){
            cin >> s[i];
        }
        bool ans=true;
        for(ll i=0; i<k-2; i++){
            if(s[i+1]-s[i]>s[i+2]-s[i+1]){
                ans=false;
                break;
            }
        }
        if(ans==true && k>1 && (s[1]-s[0])*(n-k+1)<s[0]){
            ans=false;
        }
        if(ans==true){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}