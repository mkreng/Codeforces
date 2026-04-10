#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x, y;
    cin >> n >> x >> y;
    vint a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        bool ans=true;
        for(int j=max(0LL, i-x); j<i; j++){
            if(a[j]<a[i]){
                ans=false;
                break;
            }
        }
        if(ans){
            for(int j=i+1; j<min(n, i+y+1); j++){
                if(a[j]<a[i]){
                    ans=false;
                    break;
                }
            }
        }
        if(ans){
            cout << i+1 << endl;
            break;
        }
    }
    return 0;
}