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
        int p, q;
        cin >> p >> q;
        int a=2*p+4*q+1;
        bool ans=0;
        for(int i=3; i*i<=a; i+=2){
            if(a%i==0){
                int n=(i-1)/2, m=(a/i-1)/2;
                if(n*(m+1)>=q && (n+1)*m>=q){
                    ans=1;
                    cout << n << " " << m << endl;
                    break;
                }
            }
        }
        if(!ans){
            cout << "-1\n";
        }
    }
    return 0;
}