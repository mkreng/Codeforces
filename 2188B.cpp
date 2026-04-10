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
        vector<bool> st(n, true);
        int one=0;
        for(int i=0; i<n; i++){
            if(s[i]=='1'){
                one++;
                st[i]=false;
                if(i!=0){
                    st[i-1]=false;
                }
                if(i!=n-1){
                    st[i+1]=false;
                }
            }
        }
        int ans=0;
        for(int i=0; i<n; i++){
            if(st[i]==true){
                ans++;
                if(i<n-2){
                    st[i+1]=false;
                    st[i+2]=false;
                    i+=2;
                }
                else if(i<n-1){
                    st[i+1]=false;
                    i++;
                }
            }
        }
        cout << ans+one << endl;
    }
    return 0;
}