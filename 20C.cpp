#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
void dijkstra(int src, vector<vector<pair<int, int>>> &g, int n){
    vector<bool> vis(n+1, 0);
    vint dist(n+1, INT64_MAX), p(n+1, -1);
    set<pair<int, int>> s;
    s.insert({0, src});
    dist[src]=0;
    while(s.size()>0){
        auto node=*s.begin();
        s.erase(s.begin());
        if(vis[node.second]){
            continue;
        }
        vis[node.second]=1;
        for(auto child:g[node.second]){
            if(dist[node.second]+child.second<dist[child.first]){
                dist[child.first]=dist[node.second]+child.second;
                s.insert({dist[child.first], child.first});
                p[child.first]=node.second;
            }
        }
    }
    if(dist[n]==INT64_MAX){
        cout << "-1\n";
        return;
    }
    vint path;
    int temp=n;
    while(temp!=-1){
        path.push_back(temp);
        temp=p[temp];
    }
    reverse(path.begin(), path.end());
    for(auto i:path){
        cout << i << " ";
    }
    cout << endl;
    return;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<vector<pair<int, int>>> g(n+1);
    for(int i=0; i<m; i++){
        int a, b, w;
        cin >> a >> b >> w;
        g[a].push_back({b, w});
        g[b].push_back({a, w});
    }
    dijkstra(1, g, n);
    return 0;
}