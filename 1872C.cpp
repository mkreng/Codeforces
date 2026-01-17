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
        int l, r;
        cin >> l >> r;
        bool ans=false;
        for(int i=l; i<=r; i++){
            int div=-1;
            for(int j=2; j*j<=i; j++){
                if(i%j==0){
                    div=j;
                    break;
                }
            }
            if(div!=-1){
                cout << div << " " << i-div << endl;
                ans=true;
                break;
            }
        }
        if(!ans){
            cout << "-1\n";
        }
    }
    return 0;
}