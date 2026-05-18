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
        vector<vint> a(n);
        for(int i=0; i<n; i++){
            int k;
            cin >> k;
            while(k--){
                int temp;
                cin >> temp;
                a[i].push_back(temp);
            }
        }
        vector<pair<int, int>> b(n);
        for(int i=0; i<n; i++){
            b[i].first=a[i][0]+1;
            for(int j=1; j<a[i].size(); j++){
                if(b[i].first+j<=a[i][j]){
                    b[i].first=a[i][j]+1-j;
                }
            }
            b[i].second=a[i].size();
        }
        sort(b.begin(), b.end());
        int ans=b[0].first, c=ans;
        for(int i=0; i<b.size()-1; i++){
            if(c+b[i].second<b[i+1].first){
                ans+=b[i+1].first-c-b[i].second;
                c=b[i+1].first;
            }
            else{
                c+=b[i].second;
            }
        }
        cout << ans << endl;
    }
    return 0;
}