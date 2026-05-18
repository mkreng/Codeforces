#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
vint dijkstra(int src, vector<vint> &g, int n){
    vector<bool> vis(n+1, 0);
    vint dis(n+1, INT64_MAX);
    set<pair<int, int>> s;
    s.insert({0, src});
    dis[src]=0;
    while(s.size()>0){
        auto node=*s.begin();
        s.erase(s.begin());
        if(vis[node.second]){
            continue;
        }
        vis[node.second]=1;
        for(auto child:g[node.second]){
            if(dis[node.second]+1<dis[child]){
                dis[child]=dis[node.second]+1;
                s.insert({dis[child], child});
            }
        }
    }
    return dis;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, k;
    cin >> n >> m >> k;
    vint a(n);
    for(auto &i:a){
        cin >> i;
    }
    vector<vint> g(n+1);
    for(int i=0; i<m; i++){
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    vint dis=dijkstra(1, g, n), pd(k+1, INT64_MIN);
    for(int i=1; i<=n; i++){
        pd[a[i-1]]=max(pd[a[i-1]], dis[i]);
    }
    for(int i=1; i<=k; i++){
        cout << pd[i] << " ";
    }
    cout << endl;
    return 0;
}