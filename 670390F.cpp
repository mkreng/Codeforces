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
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        unordered_map<int, int> mp;
        for(int i=0; i<n; i++){
            int temp=1e18;
            for(int j=1; j<=1000; j++){
                if(j*j*j>a[i]){
                    break;
                }
                if(a[i]%(j*j*j)==0){
                    temp=a[i]/(j*j*j);
                }
            }
            mp[temp]++;
        }
        int ans=0;
        for(auto i:mp){
            ans+=((i.second)*(i.second-1))/2;
        }
        cout << ans << endl;
    }
    return 0;
}