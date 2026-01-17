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
        int n, k;
        cin >> n >> k;
        vint h(n);
        for(int i=0; i<n; i++){
            cin >> h[i];
        }
        int current=h[k-1], w=1;
        sort(h.begin(), h.end());
        int j=0;
        while(current!=h[j]){
            j++;
        }
        bool ans=true;
        while(current!=h[n-1]){
            while(current==h[j]){
                j++;
            }
            int time_change=h[j]-current, time_drown=current-w+1;
            if(time_drown<time_change){
                ans=false;
                break;
            }
            current=h[j];
            w+=time_change;
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