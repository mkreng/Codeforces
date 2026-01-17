#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a, b;
    cin >> a >> b;
    int ans=0;
    if(a.size()<b.size()){
        goto end;
    }
    for(int i=0; i<=a.size()-b.size(); i++){
        if(a[i]==b[0]){
            bool subs=true;
            for(int j=1; j<b.size(); j++){
                if(a[i+j]!=b[j]){
                    subs=false;
                    break;
                }
            }
            if(subs){
                ans++;
                i+=b.size()-1;
            }
        }
    }
    end:
    cout << ans << endl;
    return 0;
}