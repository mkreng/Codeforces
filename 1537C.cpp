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
        vint h(n);
        for(int i=0; i<n; i++){
            cin >> h[i];
        }
        sort(h.begin(), h.end());
        int mn=__LONG_LONG_MAX__, start=-1;
        for(int i=0; i<n-1; i++){
            if(h[i+1]-h[i]<mn){
                mn=h[i+1]-h[i];
                start=i;
            }
        }
        vint ans;
        ans.push_back(h[start]);
        for(int i=start+2; i<n; i++){
            ans.push_back(h[i]);
        }
        for(int i=0; i<start; i++){
            ans.push_back(h[i]);
        }
        ans.push_back(h[start+1]);
        for(auto i:ans){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}