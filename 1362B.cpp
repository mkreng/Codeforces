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
        vint s(n);
        for(int i=0; i<n; i++){
            cin >> s[i];
        }
        int l=*max_element(s.begin(), s.end());
        int p=0;
        while((1<<p)<=l){
            p++;
        }
        int ans=-1;
        for(int i=1; i<(1<<p); i++){
            unordered_map<int, int> freq;
            for(int j=0; j<n; j++){
                freq[s[j]]++;
            }
            for(int j=0; j<n; j++){
                freq[s[j]^i]--;
            }
            bool f=true;
            for(auto j=freq.begin(); j!=freq.end(); j++){
                if(j->second){
                    f=false;
                    break;
                }
            }
            if(f){
                ans=i;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}