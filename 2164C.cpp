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
        multiset<int> a;
        vint b(m);
        vector<pair<int, int>> nonzero, zero;
        for(int i=0; i<n; i++){
            int temp;
            cin >> temp;
            a.insert(temp);
        }
        for(int i=0; i<m; i++){
            cin >> b[i];
        }
        for(int i=0; i<m; i++){
            int temp;
            cin >> temp;
            if(temp==0){
                zero.push_back({b[i], temp});
            }
            else{
                nonzero.push_back({b[i], temp});
            }
        }
        sort(nonzero.begin(), nonzero.end());
        int ans=0;
        vint saved;
        for(auto &monster:nonzero){
            if(a.empty()){
                break;
            }
            auto it=a.begin();
            int dmg=*it;
            while(dmg<monster.first){
                saved.push_back(dmg);
                a.erase(it);
                if(a.empty()){
                    break;
                }
                it=a.begin();
                dmg=*it;
            }
            if(a.empty()){
                break;
            }
            ans++;
            a.erase(a.begin());
            a.insert(max(dmg, monster.second));
        }
        for(auto i:a){
            saved.push_back(i);
        }
        sort(saved.begin(), saved.end());
        sort(zero.begin(), zero.end());
        int sword=0, monster=0;
        while(monster<zero.size() && sword<saved.size()){
            if(saved[sword]>=zero[monster].first){
                ans++;
                sword++;
                monster++;
            }
            else{
                sword++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}