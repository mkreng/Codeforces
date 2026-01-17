#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string a;
    cin >> a;
    string ans="";
    for(int i=0; i<n; i++){
        if(a[i]=='2' || a[i]=='3' || a[i]=='5' || a[i]=='7'){
            ans+=a[i];
        }
        if(a[i]=='4'){
            ans+="322";
        }
        if(a[i]=='6'){
            ans+="53";
        }
        if(a[i]=='8'){
            ans+="7222";
        }
        if(a[i]=='9'){
            ans+="7332";
        }
    }
    sort(ans.begin(), ans.end(), greater<>());
    cout << ans << endl;
    return 0;
}