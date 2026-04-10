#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, t;
    cin >> n >> t;
    vint a(n-1);
    for(int i=0; i<n-1; i++){
        cin >> a[i];
    }
    int j=0;
    bool ans=0;
    while(j<n-1){
        j+=a[j];
        if(j==t-1){
            ans=1;
            break;
        }
    }
    if(ans){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
    return 0;
}