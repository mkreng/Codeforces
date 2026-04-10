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
    vint a(n);
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        if(s[0]=='0'){
            a[i]=0;
        }
        else{
            a[i]=1;
        }
    }
    int ans=1;
    for(int i=0; i<n-1; i++){
        if(a[i]!=a[i+1]){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}