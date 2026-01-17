#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    unordered_map<string, int> freq;
    for(int i=0; i<n; i++){
        string temp;
        cin >> temp;
        freq[temp]++;
    }
    int ans=1;
    for(auto i=freq.begin(); i!=freq.end(); i++){
        ans=max(ans, i->second);
    }
    cout << ans << endl;
    return 0;
}