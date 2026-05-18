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
        set<int> a;
        vint b(n);
        for(int i=0; i<n; i++){
            cin >> b[i];
            a.insert(b[i]);
        }
        if(a.size()==n){
            sort(b.begin(), b.end(), greater<>());
            for(auto i:b){
                cout << i << " ";
            }
        }
        else{
            cout << "-1";
        }
        cout << endl;
    }
    return 0;
}