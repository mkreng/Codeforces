#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        vint a(n), b(n), c(n);
        for(auto &i:a){
            cin >> i;
        }
        for(auto &i:b){
            cin >> i;
        }
        for(auto &i:c){
            cin >> i;
        }
        int ans=0;
        for(auto i:a){
            if((x|i)==x){
                ans|=i;
            }
            else{
                break;
            }
        }
        for(auto i:b){
            if((x|i)==x){
                ans|=i;
            }
            else{
                break;
            }
        }
        for(auto i:c){
            if((x|i)==x){
                ans|=i;
            }
            else{
                break;
            }
        }
        if(ans==x){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}