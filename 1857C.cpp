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
        vint b, a;
        for(int i=0; i<(n*(n-1))/2; i++){
            int temp;
            cin >> temp;
            b.push_back(temp);
        }
        sort(b.begin(), b.end());
        int x=0, y=n-1;
        while(x<b.size()){
            a.push_back(b[x]);
            x+=y;
            y--;
        }
        a.push_back(a[n-2]);
        for(auto i:a){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}