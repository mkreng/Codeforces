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
    vector<pair<int, bool>> a(n);
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        a[i].first=temp;
        a[i].second=false;
    }
    int hacked=0, inf=0, ans=0;
    bool forward=true;
    while(hacked<n){
        if(forward){
            for(int i=0; i<n; i++){
                if(a[i].second==false && a[i].first<=inf){
                    inf++;
                    a[i].second=true;
                    hacked++;
                }
            }
            forward=false;
        }
        else{
            for(int i=n-1; i>=0; i--){
                if(a[i].second==false && a[i].first<=inf){
                    inf++;
                    a[i].second=true;
                    hacked++;
                }
            }
            forward=true;
        }
        if(hacked!=n){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}