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
        vint a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(i%2){
                a[i]=-a[i];
            }
        }
        vint p(n+1);
        map<int, int> freq;
        p[0]=0;
        freq[0]++;
        for(int i=1; i<=n; i++){
            p[i]=p[i-1]+a[i-1];
            freq[p[i]]++;
        }
        bool ans=false;
        for(auto i=freq.begin(); i!=freq.end(); i++){
            if(i->second>1){
                ans=true;
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