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
        int n, m;
        cin >> n >> m;
        unordered_map<int, int> freq;
        for(int i=0; i<m; i++){
            int u, v;
            cin >> u >> v;
            freq[u]++;
            freq[v]++;
        }
        unordered_map<int, int> d;
        for(auto i:freq){
            d[i.second]++;
        }
        int x=-1, y=-1, xy=d[1];
        for(auto i:d){
            if(i.first!=1 && i.second==1){
                x=i.first;
                y=xy/x;
                break;
            }
        }
        if(x==-1){
            for(auto i:d){
                if(i.first!=1){
                    y=i.first-1;
                    x=i.second-1;
                }
            }
        }
        cout << x << " " << y << endl;
    }
    return 0;
}