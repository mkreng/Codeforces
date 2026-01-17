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
        map<int, int> freq;
        set<int> s;
        for(int i=0; i<n; i++){
            int temp;
            cin >> temp;
            freq[temp]++;
            s.insert(temp);
            s.insert(temp+1);
        }
        int last=0, ans=0;
        for(auto i:s){
            int cnt=freq[i];
            ans+=max(0LL, cnt-last);
            last=cnt;
        }
        cout << ans << endl;
    }
    return 0;
}