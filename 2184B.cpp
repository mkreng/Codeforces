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
        int s, k, m;
        cin >> s >> k >> m;
        if(k>=s){
            cout << max(s-(m%k), 0LL) << endl;
        }
        else{
            int temp=m/k;
            if(m%k==0){
                if(temp%2==0){
                    cout << s << endl;
                }
                else{
                    cout << k << endl;
                }
            }
            else{
                if(temp%2){
                    cout << k-(m%k) << endl;
                }
                else{
                    cout << s-(m%k) << endl;
                }
            }
        }
    }
    return 0;
}