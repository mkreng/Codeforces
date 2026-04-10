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
        vint a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<n; i++){
            int m=0, l=0;
            for(int j=i+1; j<n; j++){
                if(a[j]>a[i]){
                    m++;
                }
                if(a[j]<a[i]){
                    l++;
                }
            }
            cout << max(m, l) << " ";
        }
        cout << endl;
    }
    return 0;
}