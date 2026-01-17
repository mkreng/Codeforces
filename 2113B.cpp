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
        int w, h, a, b;
        cin >> w >> h >> a >> b;
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        bool ans=false;
        if((x1!=x2 && (x2-x1)%a==0) || (y1!=y2 && (y2-y1)%b==0)){
            ans=true;
        }
        if(ans){
            cout << "Yes\n";
        }
        else{
            cout << "No\n";
        }
    }
    return 0;
}