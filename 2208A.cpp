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
        vector<vint> a(n, vint (n));
        unordered_map<int, int> freq;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin >> a[i][j];
                freq[a[i][j]]++;
            }
        }
        bool ans=true;
        for(auto i=freq.begin(); i!=freq.end(); i++){
            if(i->second>n*(n-1)){
                ans=false;
                break;
            }
        }
        if(ans){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}