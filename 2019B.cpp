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
        int n, q;
        cin >> n >> q;
        vint x(n);
        for(int i=0; i<n; i++){
            cin >> x[i];
        }
        unordered_map<int, int> freq;
        for(int i=0; i<n-1; i++){
            freq[(i+1)*(n-i-1)]+=x[i+1]-x[i]-1;
        }
        for(int i=0; i<n; i++){
            freq[(i+1)*(n-i)-1]++;
        }
        while(q--){
            int k;
            cin >> k;
            cout << freq[k] << " ";
        }
        cout << endl;
    }
    return 0;
}