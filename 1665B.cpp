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
        vint a(n);
        unordered_map<int, int> freq;
        for(int i=0; i<n; i++){
            cin >> a[i];
            freq[a[i]]++;
        }
        int maxf=0;
        for(int i=0; i<n; i++){
            maxf=max(maxf, freq[a[i]]);
        }
        int to_fill=n-maxf, ans=0, reserve=0;
        bool available=false;
        while(to_fill>0){
            ans++;
            int take=min(maxf, to_fill);
            ans+=take;
            to_fill-=take;
            maxf*=2;
        }
        cout << ans << endl;
    }
    return 0;
}