#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin >> q;
    unordered_map<string, string> user;
    while(q--){
        string old, now;
        cin >> old >> now;
        if(user.find(old)!=user.end()){
            auto it=user.find(old);
            string name=it->second;
            user.erase(it);
            user[now]=name;
        }
        else{
            user[now]=old;
        }
    }
    cout << user.size() << endl;
    for(auto i:user){
        cout << i.second << " " << i.first << endl;
    }
    return 0;
}