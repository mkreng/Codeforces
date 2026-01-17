#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    if(k!=4){
        int ans=(k-(a[0]%k))%k;
        for(int i=1; i<n; i++){
            ans=min(ans, (k-(a[i]%k))%k);
        }
        cout << ans << endl;
        return;
    }
    int even=0;
    int to_four=4;
    for(int i=0; i<n; i++){
        if(a[i]%2==0){
            even++;
        }
        to_four=min(to_four, (4-(a[i]%4))%4);
    }
    int product_four;
    if(even>=2){
        product_four=0;
    }
    else if(even==1){
        product_four=1;
    }
    else{
        product_four=2;
    }
    cout << min(to_four, product_four) << endl;
    return;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}