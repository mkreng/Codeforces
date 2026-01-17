#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vint vector<int>
#define vll vector<long long>
#define endl "\n"
int main(){
    int t;
    cin >> t;
    while(t--){
        ll a, b, ans=1e18;
        cin >> a >> b;
        for(ll i=0; i<30; i++){
            if(i==0 && b==1){
                continue;
            }
            ll temp=i, copyb=b, copya=a;
            for(ll j=0; j<i; j++){
                copyb++;
            }
            while(copya!=0){
                copya/=copyb;
                temp++;
            }
            ans=min(ans, temp);
        }
        cout << ans << endl;
    }
    return 0;
}