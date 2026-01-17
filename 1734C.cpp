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
        string ts;
        cin >> ts;
        vector<pair<char, bool>> s(n);
        for(int i=0; i<n; i++){
            s[i].first=ts[i];
            s[i].second=false;
        }
        int ans=0;
        for(int i=0; i<n; i++){
            if(s[i].first=='0'){
                if(s[i].second==false){
                    ans+=i+1;
                    s[i].second=true;
                }
                for(int j=2; j*(i+1)-1<n; j++){
                    if(s[(i+1)*j-1].first=='0' && s[(i+1)*j-1].second==false){
                        ans+=i+1;
                        s[(i+1)*j-1].second=true;
                    }
                    else if(s[(i+1)*j-1].first=='1'){
                        break;
                    }
                    else{
                        continue;
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}