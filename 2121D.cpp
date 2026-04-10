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
        vint a(n), b(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<n; i++){
            cin >> b[i];
        }
        int k=0;
        vector<pair<int, int>> ans;
        for(int i=0; i<n; i++){
            for(int j=1; j<n; j++){
                if(a[j-1]>a[j]){
                    swap(a[j-1], a[j]);
                    k++;
                    ans.push_back({1, j});
                }
            }
        }
        for(int i=0; i<n; i++){
            for(int j=1; j<n; j++){
                if(b[j-1]>b[j]){
                    swap(b[j-1], b[j]);
                    k++;
                    ans.push_back({2, j});
                }
            }
        }
        for(int i=0; i<n; i++){
            if(a[i]>b[i]){
                k++;
                ans.push_back({3, i+1});
            }
        }
        cout << k << endl;
        for(int i=0; i<ans.size(); i++){
            cout << ans[i].first << " " << ans[i].second << endl;
        }
    }
    return 0;
}