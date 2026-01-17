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
        string a, b;
        cin >> a >> b;
        bool ans=true, flipped=false;
        vint prefix(n);
        prefix[0]=1;
        if(a[0]=='0'){
            prefix[0]-=2;
        }
        for(int i=1; i<n; i++){
            prefix[i]=prefix[i-1];
            if(a[i]=='1'){
                prefix[i]++;
            }
            else{
                prefix[i]--;
            }
        }
        for(int i=n-1; i>=0; i--){
            char curr=a[i];
            if(flipped){
                if(curr=='0'){
                    curr='1';
                }
                else{
                    curr='0';
                }
            }
            if(curr!=b[i]){
                if(prefix[i]!=0){
                    ans=false;
                    break;
                }
                flipped=!flipped;
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