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
        vector<pair<int, int>> a(n), b(n), c(n);
        for(int i=0; i<n; i++){
            cin >> a[i].first;
            a[i].second=i;
        }
        for(int i=0; i<n; i++){
            cin >> b[i].first;
            b[i].second=i;
        }
        for(int i=0; i<n; i++){
            cin >> c[i].first;
            c[i].second=i;
        }
        sort(a.begin(), a.end(), greater<>());
        sort(b.begin(), b.end(), greater<>());
        sort(c.begin(), c.end(), greater<>());
        int ans=LONG_LONG_MIN;
        for(int i=0; i<3; i++){
            int j=0, k=0;
            while(a[i].second==b[j].second){
                j++;
            }
            while(c[k].second==a[i].second || c[k].second==b[j].second){
                k++;
            }
            int temp1=a[i].first+b[j].first+c[k].first;
            j=0;
            k=0;
            while(a[i].second==c[k].second){
                k++;
            }
            while(b[j].second==a[i].second || b[j].second==c[k].second){
                j++;
            }
            int temp2=a[i].first+b[j].first+c[k].first;
            ans=max(ans, max(temp1, temp2));
        }
        cout << ans << endl;
    }
    return 0;
}