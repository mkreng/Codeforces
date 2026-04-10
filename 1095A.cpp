#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string t;
    cin >> t;
    int j=0, add=1;
    while(j<n){
        cout << t[j];
        j+=add;
        add++;
    }
    cout << endl;
    return 0;
}