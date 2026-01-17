#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    vint a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int sum=accumulate(a.begin(), a.end(), 0LL);
    int same=-1;
    bool samevalue=false;
    vector<bool> updated(n, false);
    while(q--){
        int t;
        cin >> t;
        if(t==1){
            int i, x;
            cin >> i >> x;
            int value=a[i-1];
            if(samevalue && !updated[i-1]){
                value=same;
            }
            sum+=x-value;
            a[i-1]=x;
            updated[i-1]=true;
            cout << sum << endl;
        }
        else{
            int x;
            cin >> x;
            sum=n*x;
            same=x;
            samevalue=true;
            fill(updated.begin(), updated.end(), false);
            cout << sum << endl;
        }
    }
    return 0;
}