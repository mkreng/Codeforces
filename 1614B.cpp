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
        ll n;
        cin >> n;
        vector<pair<ll, ll>> a(n);
        for(ll i=0; i<n; i++){
            ll temp;
            cin >> temp;
            a[i].first=temp;
            a[i].second=i;
        }
        sort(a.begin(), a.end(), greater<>());
        vll ans(n+1, 0);
        ll time=0;
        for(ll i=0; i<n; i++){
            time+=(i/2+1)*a[i].first*2;
            if(i%2==0){
                ans[a[i].second+1]=i/2+1;
            }
            else{
                ans[a[i].second+1]=(-1)*((i+1)/2);
            }
        }
        cout << time << endl;
        for(ll i=0; i<n+1; i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}