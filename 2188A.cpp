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
        vint ans(n);
        ans[n-1]=n;
        ans[n-2]=1;
        int diff=n-2;
        for(int i=n-3; i>=0; i--){
            if((n-i)%2){
                ans[i]=ans[i+1]+diff;
            }
            else{
                ans[i]=ans[i+1]-diff;
            }
            diff--;
        }
        for(auto i:ans){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}