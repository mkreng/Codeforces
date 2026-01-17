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
        int n;
        cin >> n;
        int zero=0, one=0;
        for(int i=0; i<n; i++){
            int temp;
            cin >> temp;
            if(temp==0){
                zero++;
            }
            if(temp==1){
                one++;
            }
        }
        int ans=one*(pow(2, zero));
        cout << ans << endl;
    }
    return 0;
}