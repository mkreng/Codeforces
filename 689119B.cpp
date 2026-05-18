#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    set<int> a;
    for(int i=0; i<2*k; i++){
        int temp;
        cin >> temp;
        a.insert(temp);
    }
    int ans=0, l=1;
    for(auto i=a.begin(); i!=a.end(); i++){
        ans+=*i-l;
        ans+=2;
        l=*i;
    }
    cout << ans << endl;
    return 0;
}