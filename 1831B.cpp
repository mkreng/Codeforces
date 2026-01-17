#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> a(n), b(n);
        for(ll i=0; i<n; i++){
            cin >> a[i];
        }
        for(ll i=0; i<n; i++){
            cin >> b[i];
        }
        vector<ll> streakA(2*n+1, 0), streakB(2*n+1, 0);
        ll currA=a[0], lenA=1, currB=b[0], lenB=1;
        for(ll i=1; i<n; i++){
            if(a[i]==currA){
                lenA++;
            }
            else{
                streakA[currA]=max(streakA[currA], lenA);
                currA=a[i];
                lenA=1;
            }
            if(b[i]==currB){
                lenB++;
            }
            else{
                streakB[currB]=max(streakB[currB], lenB);
                currB=b[i];
                lenB=1;
            }
        }
        streakA[currA]=max(streakA[currA], lenA);
        streakB[currB]=max(streakB[currB], lenB);
        ll ans=0;
        for(ll i=0; i<2*n+1; i++){
            ans=max(ans, streakA[i]+streakB[i]);
        }
        cout << ans << endl;
    }
    return 0;
}