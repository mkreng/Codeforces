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
        ll a, b;
        cin >> a >> b;
        ll small=min(a, b), big=max(a, b), temp=small;
        while(temp<big){
            temp*=2;
        }
        if(temp!=big){
            cout << "-1\n";
        }
        else{
            ll power2=log2(big/small);
            ll ans=power2/3;
            if(power2%3!=0){
                ans++;
            }
            cout << ans << endl;
        }
    }
    return 0;
}