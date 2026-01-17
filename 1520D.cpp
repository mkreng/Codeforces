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
            int temp;
            cin >> temp;
            a[i]=temp-i;
            freq[a[i]]++;
        }
        int ans=0;
        for(auto i=freq.begin(); i!=freq.end(); i++){
            ans+=((i->second)*(i->second-1))/2;
        }
        cout << ans << endl;
    }
    return 0;
}