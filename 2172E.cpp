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
        string n;
        int j, k;
        cin >> n >> j >> k;
        sort(n.begin(), n.end());
        string m=n;
        for(int i=0; i<j-1; i++){
            next_permutation(n.begin(), n.end());
        }
        for(int i=0; i<k-1; i++){
            next_permutation(m.begin(), m.end());
        }
        int x=0;
        for(int i=0; i<n.size(); i++){
            if(n[i]==m[i]){
                x++;
            }
        }
        cout << x << "A" << n.size()-x << "B\n";
    }
    return 0;
}