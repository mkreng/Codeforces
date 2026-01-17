#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> m(n);
        vector<vector<ll>> a(n);
        for(ll i=0; i<n; i++){
            cin >> m[i];
            a[i].resize(m[i]);
            for(ll j=0; j<m[i]; j++){
                cin >> a[i][j];
            }
        }
        for(ll i=0; i<n; i++){
            sort(a[i].begin(), a[i].end());
        }
        vector<ll> smallest, second_smallest;
        for(ll i=0; i<n; i++){
            smallest.push_back(a[i][0]);
            second_smallest.push_back(a[i][1]);
        }
        ll smallest_element=*min_element(smallest.begin(), smallest.end());
        ll second_smallest_element=*min_element(second_smallest.begin(), second_smallest.end());
        ll sum_second_smallest=accumulate(second_smallest.begin(), second_smallest.end(), 0LL);
        cout << smallest_element+sum_second_smallest-second_smallest_element << endl;
    }
    return 0;
}