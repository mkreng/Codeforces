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
        string s;
        cin >> s;
        vector<bool> a(n, false);
        a[0]=true;
        int j=0;
        for(int i=0; i<n; i++){
            if(s[j]=='R'){
                j++;
            }
            else{
                j--;
            }
            a[j]=true;
        }
        int ans=0;
        for(int i=0; i<n; i++){
            if(a[i]==1){
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}