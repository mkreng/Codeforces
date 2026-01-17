#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int high(int x){
    int ans=0;
    while(x>0){
        x>>=1;
        ans++;
    }
    return ans;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vint a(n);
        for(int i=0; i<n; i++){
            int temp;
            cin >> temp;
            a[i]=high(temp);
        }
        sort(a.begin(), a.end());
        int len=1, ans=0;
        for(int i=0; i<n-1; i++){
            if(a[i+1]==a[i]){
                len++;
            }
            else{
                ans+=((len)*(len-1))/2;
                len=1;
            }
        }
        ans+=((len)*(len-1))/2;
        cout << ans << endl;
    }
    return 0;
}