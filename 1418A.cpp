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
        ll x, y, k;
        cin >> x >> y >> k;
        ll sticks_needed=y*k+k;
        ll ans=k+(sticks_needed-1)/(x-1);
        if((sticks_needed-1)%(x-1)!=0){
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}