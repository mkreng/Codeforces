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
    vector<pair<int, int>> m(n);
    for(int i=0; i<n; i++){
        cin >> m[i].first >> m[i].second;
    }
    sort(m.begin(), m.end());
    vector<pair<int, int>> crs;
    vint x={-1, 0, 1}, y={-1, 0, 1};
    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            for(int k=0; k<3; k++){
                int dx=x[j], dy=y[k];
                if(dx==0 && dy==0){
                    continue;
                }
                bool ex1=binary_search(m.begin(), m.end(), make_pair(m[i].first+dx, m[i].second+dy));
                if(ex1){
                    crs.push_back({m[i].first-dx, m[i].second-dy});
                    crs.push_back({m[i].first+2*dx, m[i].second+2*dy});
                }
                bool ex2=binary_search(m.begin(), m.end(), make_pair(m[i].first+2*dx, m[i].second+2*dy));
                if(ex2){
                    crs.push_back({m[i].first+dx, m[i].second+dy});
                }
            }
        }
    }
    set<pair<int, int>> ans;
    for(int i=0; i<crs.size(); i++){
        ans.insert(crs[i]);
    }
    cout << ans.size() << endl;
    return 0;
}