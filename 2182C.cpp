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
        vint a(n), b(n), c(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<n; i++){
            cin >> b[i];
        }
        for(int i=0; i<n; i++){
            cin >> c[i];
        }
        int ab=0, bc=0;
        for(int i=0; i<n; i++){
            bool possible=true;
            for(int j=0; j<n; j++){
                if(a[j]>=b[(j+i)%n]){
                    possible=false;
                    break;
                }
            }
            if(possible){
                ab++;
            }
        }
        for(int i=0; i<n; i++){
            bool possible=true;
            for(int j=0; j<n; j++){
                if(b[j]>=c[(j+i)%n]){
                    possible=false;
                    break;
                }
            }
            if(possible){
                bc++;
            }
        }
        cout << ab*bc*n << endl;
    }
    return 0;
}