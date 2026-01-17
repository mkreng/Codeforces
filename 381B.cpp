#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int m;
    cin >> m;
    map<int, int> freq;
    for(int i=0; i<m; i++){
        int temp;
        cin >> temp;
        freq[temp]++;
    }
    int ans=0;
    vint out;
    for(auto i=freq.begin(); i!=freq.end(); i++){
        out.push_back(i->first);
        ans++;
        i->second--;
    }
    for(auto i=--(--freq.end()); i!=--freq.begin(); i--){
        if(i->second!=0){
            out.push_back(i->first);
            ans++;
            i->second--;
        }
    }
    cout << ans << endl;
    for(int i=0; i<out.size(); i++){
        cout << out[i] << " ";
    }
    cout << endl;
    return 0;
}