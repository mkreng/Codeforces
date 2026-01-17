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
        vector<pair<int, int>> pairs;
        for(int i=0; i<n; i++){
            cin >> a[i];
            pairs.push_back({a[i], i+1});
        }
        sort(a.begin(), a.end());
        sort(pairs.begin(), pairs.end());
        int ans=0;
        for(int i=0; i<n && a[i]*a[i]<=2*n; i++){
            for(int j=i+1; j<n && a[i]*a[j]<=2*n; j++){
                if(a[i]*a[j]==pairs[i].second+pairs[j].second){
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}