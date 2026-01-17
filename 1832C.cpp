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
        vint a;
        int inserted=0;
        for(int i=0; i<n; i++){
            int temp;
            cin >> temp;
            if(i==0 || (i!=0 && a[inserted-1]!=temp)){
                a.push_back(temp);
                inserted++;
            }
        }
        int ans=1, peaks=0;
        for(int i=1; i+1<a.size(); i++){
            if(a[i]>a[i-1] && a[i]>a[i+1]){
                ans++;
                peaks++;
            }
            if(a[i]<a[i-1] && a[i]<a[i+1]){
                ans++;
                peaks++;
            }
        }
        if(n!=1 && !(peaks==0 && a[a.size()-1]==a[0])){
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}