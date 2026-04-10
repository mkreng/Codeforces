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
        sort(a.begin(), a.end());
        int ans=0;
        for(auto i=freq.begin(); i!=freq.end(); i++){
            int c=lower_bound(a.begin(), a.end(), i->first)-a.begin();
            ans+=((i->second)*(i->second-1)*(i->second-2))/6+((i->second)*(i->second-1))/2*c;
        }
        cout << ans << endl;
    }
    return 0;
}