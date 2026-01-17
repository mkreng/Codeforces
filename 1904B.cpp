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
        vector<pair<int, int>> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i].first;
            a[i].second=i;
        }
        sort(a.begin(), a.end());
        vint prefix(n);
        prefix[0]=a[0].first;
        for(int i=1; i<n; i++){
            prefix[i]=prefix[i-1]+a[i].first;
        }
        vint output(n);
        output[a[n-1].second]=n-1;
        for(int i=n-2; i>=0; i--){
            if(prefix[i]>=a[i+1].first){
                output[a[i].second]=output[a[i+1].second];
            }
            else{
                output[a[i].second]=i;
            }
        }
        for(int i=0; i<n; i++){
            cout << output[i] << " ";
        }
        cout << endl;
    }
    return 0;
}