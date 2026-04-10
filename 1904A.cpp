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
        int a, b;
        cin >> a >> b;
        int xk, yk;
        cin >> xk >> yk;
        int xq, yq;
        cin >> xq >> yq;
        vint poss={a, b, -a, -b};
        set<pair<int, int>> ans;
        for(int i=0; i<4; i++){
            int xkn=xk+poss[i];
            int ykn;
            for(int j=0; j<4; j++){
                if(i%2 && j%2){
                    continue;
                }
                if(i%2==0 && j%2==0){
                    continue;
                }
                ykn=yk+poss[j];
                int xdiff=abs(xq-xkn);
                int ydiff=abs(yq-ykn);
                if((xdiff==a && ydiff==b) || (xdiff==b && ydiff==a)){
                    ans.insert({xkn, ykn});
                }
            }
        }
        cout << ans.size() << endl;
    }
    return 0;
}