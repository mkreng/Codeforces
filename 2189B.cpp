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
        vector<pair<int, pair<int, int>>> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i].first >> a[i].second.first >> a[i].second.second;
        }
        int p=0;
        for(int i=0; i<n; i++){
            p+=(a[i].second.first-1)*a[i].first;
            if(p>=x){
                break;
            }
        }
        if(p>=x){
            cout << "0\n";
        }
        else{
            int mx=INT64_MIN;
            for(int i=0; i<n; i++){
                mx=max(mx, a[i].second.first*a[i].first-a[i].second.second);
            }
            if(mx<=0){
                cout << "-1\n";
            }
            else{
                int ans=(x-p)/mx;
                if((x-p)%mx!=0){
                    ans++;
                }
                cout << ans << endl;
            }
        }
    }
    return 0;
}