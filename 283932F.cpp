#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
bool check(int m, string t, string p, vint &a){
    vector<bool> d(t.size(), false);
    for(int i=0; i<m; i++){
        d[a[i]-1]=1;
    }
    int idx=0;
    for(int i=0; i<t.size(); i++){
        if(!d[i] && t[i]==p[idx]){
            idx++;
        }
        if(idx==p.size()){
            return 1;
        }
    }
    return 0;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    unordered_map<char, int> freq;
    string t, p;
    cin >> t >> p;
    vint a(t.size());
    for(auto &i:a){
        cin >> i;
    }
    int low=0, high=t.size();
    while(high-low>1){
        int mid=(high+low)/2;
        if(check(mid, t, p, a)){
            low=mid;
        }
        else{
            high=mid-1;
        }
    }
    if(check(high, t, p, a)){
        cout << high << endl;
    }
    else{
        cout << low << endl;
    }
    return 0;
}