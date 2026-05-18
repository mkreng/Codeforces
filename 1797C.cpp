#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
// #define endl "\n"
int ask(int r, int c){
    cout << "? " << r << " " << c << endl;
    int ans;
    cin >> ans;
    return ans;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int a=ask(1, 1);
        if(a+1<=n && a+1<=m){
            int b=ask(1, a+1), c=ask(a+1, 1);
            if(b<a){
                cout << "! " << b+1 << " " << a+1 << endl;
            }
            else if(c<a){
                cout << "! " << a+1 << " " << c+1 << endl;
            }
            else{
                cout << "! " << a+1 << " " << a+1 << endl;
            }
        }
        else if(a+1>n){
            int b=ask(1, a+1);
            cout << "! " << b+1 << " " << a+1 << endl;            
        }
        else{
            int c=ask(a+1, 1);
            cout << "! " << a+1 << " " << c+1 << endl;
        }
    }
    return 0;
}