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
        int ans1=0, ans2=0;
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(i%2){
                ans2=gcd(ans2, a[i]);
            }
            else{
                ans1=gcd(ans1, a[i]);
            }
        }
        bool one=1, two=1;
        for(int i=0; i<n; i++){
            if(i%2 && a[i]%ans1==0){
                one=0;
            }
            if(i%2==0 && a[i]%ans2==0){
                two=0;
            }
        }
        if(one){
            cout << ans1 << endl;
        }
        else if(two){
            cout << ans2 << endl;
        }
        else{
            cout << "0\n";
        }
    }
    return 0;
}