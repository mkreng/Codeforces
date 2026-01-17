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
        vint a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int segments=0;
        bool segment_started=false;
        for(int i=0; i<n; i++){
            if(a[i]!=0){
                if(!segment_started){
                    segments++;
                }
                segment_started=true;
                
            }
            else{
                segment_started=false;
            }
        }
        cout << min(segments, 2LL) << endl;
    }
    return 0;
}