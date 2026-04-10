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
        string a;
        cin >> a;
        vint zero(n+1, 0), one(n+1, 0);
        for(int i=0; i<n; i++){
            zero[i+1]=zero[i];
            if(a[i]=='0'){
                zero[i+1]++;
            }
        }
        for(int i=n-1; i>=0; i--){
            one[i]=one[i+1];
            if(a[i]=='1'){
                one[i]++;
            }
        }
        int ans=-1, d=INT64_MAX;
        for(int i=0; i<n+1; i++){
            bool l=true, r=true;
            if(zero[i]<(i+1)/2){
                l=false;
            }
            if(one[i]<(n-i+1)/2){
                r=false;
            }
            if(l && r && abs(n-2*i)<d){
                d=abs(n-2*i);
                ans=i;
            }
        }
        cout << ans << endl;
    }
    return 0;
}