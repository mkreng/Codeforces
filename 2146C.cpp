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
        vint p(n, -1);
        bool ans=true;
        if(s[0]=='0' && s[1]=='1'){
            ans=false;
        }
        if(s[n-2]=='1' && s[n-1]=='0'){
            ans=false;
        }
        if(ans){
            for(int i=1; i<n-1; i++){
                if(s[i-1]=='1' && s[i]=='0' && s[i+1]=='1'){
                    ans=false;
                    break;
                }
            }
        }
        if(!ans){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
            int st=-1;
            for(int i=0; i<n; i++){
                if(s[i]=='1'){
                    p[i]=i+1;
                }
                else{
                    st=i;
                    while(i<n-1 && s[i+1]=='0'){
                        p[i]=i+2;
                        i++;
                    }
                    p[i]=st+1;
                }
            }
            for(auto i:p){
                cout << i << " ";
            }
            cout << endl;
        }
    }
    return 0;
}