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
        int n, c, k;
        cin >> n >> c >> k;
        vint a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        for(int i=0; i<n; i++){
            if(a[i]<=c){
                int temp=min(c-a[i], k);
                a[i]+=temp;
                k-=temp;
                c+=a[i];
            }
            else{
                break;
            }
        }
        cout << c << endl;
    }
    return 0;
}