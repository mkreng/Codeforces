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
        ll n, k;
        cin >> n >> k;
        vll a(n);
        for(ll i=0; i<n; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        vll diff(n-1);
        for(ll i=0; i<n-1; i++){
            diff[i]=a[i+1]-a[i];
        }
        ll max_len=0, len=1;
        for(ll i=0; i<n-1; i++){
            if(diff[i]<=k){
                len++;
            }
            else{
                max_len=max(max_len, len);
                len=1;
            }
        }
        max_len=max(max_len, len);
        cout << n-max_len << endl;
    }
    return 0;
}