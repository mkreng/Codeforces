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
        vint p(n, a[0]);
        for(int i=1; i<n; i++){
            p[i]=p[i-1]+a[i];
        }
        vint o(n, 0);
        if(a[0]%2){
            o[0]++;
        }
        for(int i=1; i<n; i++){
            o[i]=o[i-1];
            if(a[i]%2){
                o[i]++;
            }
        }
        for(int i=0; i<n; i++){
            if(o[i]%3==0){
                cout << p[i]-o[i]/3 << " ";
            }
            else if(o[i]%3==1){
                if(i==0){
                    cout << a[i] << " ";
                }
                else{
                    cout << p[i]-1-o[i]/3 << " ";
                }
            }
            else{
                cout << p[i]-o[i]/3 << " ";
            }
        }
        cout << endl;
    }
    return 0;
}