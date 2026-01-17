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
        vint even, odd;
        for(int i=0; i<n; i++){
            int temp;
            cin >> temp;
            if(temp%2==0){
                even.push_back(temp);
            }
            else{
                odd.push_back(temp);
            }
        }
        int ans=0, ceil=odd.size()/2;
        if(odd.size()%2!=0){
            ceil++;
        }
        if(ceil!=0){
            ans=accumulate(even.begin(), even.end(), 0LL);
            sort(odd.begin(), odd.end(), greater<>());
            for(int i=0; i<ceil; i++){
                ans+=odd[i];
            }
        }
        cout << ans << endl;
    }
    return 0;
}