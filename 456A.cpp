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
    vector<pair<int, int>> l(n);
    for(int i=0; i<n; i++){
        cin >> l[i].first >> l[i].second;
    }
    sort(l.begin(), l.end());
    bool ans=false;
    for(int i=0; i<n-1; i++){
        if(l[i+1].first>l[i].first && l[i+1].second<l[i].second){
            ans=true;
            break;
        }
    }
    if(ans){
        cout << "Happy Alex\n";
    }
    else{
        cout << "Poor Alex\n";
    }
    return 0;
}