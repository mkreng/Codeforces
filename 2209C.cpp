#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
// #define endl "\n"
int ask(int i, int j){
    cout << "? " << i << " " << j << endl;
    int r;
    cin >> r;
    return r;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        bool ans=0;
        for(int i=1; i<=2*n-2; i+=2){
            int r=ask(i, i+1);
            if(r==1){
                cout << "! " << i << endl;
                ans=1;
                break;
            }
        }
        if(!ans){
            int r=ask(2*n-1, 1);
            if(r==1){
                cout << "! " << 1 << endl;
            }
            else{
                r=ask(2*n-1, 2);
                if(r==1){
                    cout << "! " << 2 << endl;
                }
                else{
                    cout << "! " << 2*n << endl;
                }
            }
        }
    }
    return 0;
}