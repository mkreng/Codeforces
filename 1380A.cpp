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
        vector<pair<int, int>> p;
        for(int i=0; i<n; i++){
            int temp;
            cin >> temp;
            p.push_back({temp, i+1});
        }
        sort(p.begin(), p.end(), greater<>());
        bool ans=false;
        for(int i=0; i<n; i++){
            if(ans){
                break;
            }
            int f=-1, s=-1;
            bool first=false, second=false;
            for(int j=i+1; j<n; j++){
                if(p[j].second<p[i].second){
                    first=true;
                    f=p[j].second;
                }
                if(p[j].second>p[i].second){
                    second=true;
                    s=p[j].second;
                }
                if(first && second){
                    ans=true;
                    cout << "YES\n" << f << " " << p[i].second << " " << s << endl;
                    break;
                }
            }
            if(ans){
                break;
            }
        }
        if(!ans){
            cout << "NO\n";
        }
    }
    return 0;
}