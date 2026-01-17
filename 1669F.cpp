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
        vint w(n);
        for(int i=0; i<n; i++){
            cin >> w[i];
        }
        int a=0, b=n-1, suma=w[a], sumb=w[b], ans=0;
        while(b>a){
            if(suma==sumb){
                ans=a+1+n-b;
                a++;
                b--;
                suma+=w[a];
                sumb+=w[b];
            }
            else if(suma>sumb){
                b--;
                sumb+=w[b];
            }
            else{
                a++;
                suma+=w[a];
            }
        }
        cout << ans << endl;
    }
    return 0;
}